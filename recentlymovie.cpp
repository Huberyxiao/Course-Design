#include <stdio.h>
#include "struct.h" 
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>



int cmp(const void *a, const void *b){ 
    nodemovie *c = (nodemovie *)a;
    nodemovie *d = (nodemovie *)b;
    if(c->month!=d->month){
    	return (d->month)-(c->month);
	}  
    else  if(d->day!=c->day){
    	return d->day-c->day;
	} 
	else return d->hour-c->hour;
}
nodemovie *getfilemovie();
//近期影片查看 ,获取后进行从大到小排序，输出前五项 
void recentlymovie(){
	int i=0;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************欢迎光临银河影院**************************\n\n\n");
	printf("\033[40;35m                           客户端\n\n\033[0m");
	printf("                           近期上映一览\n");
	printf("    _____________________________________________________________\n");
	printf("     电影名称         ID            上映时间             影厅\n"); 
	//调用电影文件打开函数  直接访问第三层
	nodemovie *head=getfilemovie();
	nodemovie *p=head;
	p=p->next;
	nodemovie t[1000]; 
	if(p==NULL){
		printf("    当前无演出计划！\n    按任意键返回");
		getch(); 
		return;
	}
	i=0;
	while(p!=NULL){
		strcpy(t[i].name,p->name);
		strcpy(t[i].id,p->id);
		t[i].month=p->month;
		t[i].day=p->day;
		t[i].hour=p->hour;
		t[i].room=p->room;
		i++;
		p=p->next;
	}
	time_t timep;
	struct tm *r;
	time (&timep);
	r=gmtime(&timep);
	int hour=8+r->tm_hour;/*获取当前时,这里获取西方的时间,刚好相差八个小时*/
	int day=r->tm_mday;/*获取当前月份日数,范围是1-31*/
	int month=1+r->tm_mon;/*获取当前月份,范围是0-11,所以要加1*/
	qsort(t,i,sizeof(t[0]),cmp);
	int x=0;
	while(x<i){
		if((t[x].month==month+1)||(t[x].month==month&&t[x].day>day)||(t[x].month==month&&t[x].day==day&&t[x].hour>hour)){
		printf("%14s%13s           %d月%2d日%2d时           %d\n",t[x].name,t[x].id,t[x].month,t[x].day,t[x].hour,t[x].room); 
		}
		x++;
	}
	printf("\n\n\n                         Tips:任意键返回\n");
	getch();
	return; 
}
