#include<conio.h>
#include <stdio.h>
#include <windows.h> 
#include "struct.h"

int cmp2(const void *a, const void *b){ 
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
nodemovie * getfilemovie();
//查看所有文件 
void lookmovie(){
	system("cls");
	printf("********************************************************************\n");
	printf("**************************欢迎光临银河影院**************************\n\n\n");
	printf("\033[40;35m                           查看影片演出计划\n\033[0m");
	printf("                            全部计划\n");
	printf("    _____________________________________________________________\n");
	printf("     电影名称         ID            上映时间             影厅\n"); 
	//调用电影文件打开函数  直接访问第三层,打印全部电影排挡数据 
	nodemovie t[1000]; 
	int i;
	nodemovie *head=getfilemovie();
	nodemovie * p=head;
	p=p->next;
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
	qsort(t,i,sizeof(t[0]),cmp2);
	int j=0;
	while(j<i){
		printf("%14s%13s           %d月%2d日%2d时           %d\n",t[j].name,t[j].id,t[j].month,t[j].day,t[j].hour,t[j].room); 
		j++;
	}
	printf("   按任意键返回！");
	getch();
	return;
} 
