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
//����ӰƬ�鿴 ,��ȡ����дӴ�С�������ǰ���� 
void recentlymovie(){
	int i=0;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
	printf("\033[40;35m                           �ͻ���\n\n\033[0m");
	printf("                           ������ӳһ��\n");
	printf("    _____________________________________________________________\n");
	printf("     ��Ӱ����         ID            ��ӳʱ��             Ӱ��\n"); 
	//���õ�Ӱ�ļ��򿪺���  ֱ�ӷ��ʵ�����
	nodemovie *head=getfilemovie();
	nodemovie *p=head;
	p=p->next;
	nodemovie t[1000]; 
	if(p==NULL){
		printf("    ��ǰ���ݳ��ƻ���\n    �����������");
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
	int hour=8+r->tm_hour;/*��ȡ��ǰʱ,�����ȡ������ʱ��,�պ����˸�Сʱ*/
	int day=r->tm_mday;/*��ȡ��ǰ�·�����,��Χ��1-31*/
	int month=1+r->tm_mon;/*��ȡ��ǰ�·�,��Χ��0-11,����Ҫ��1*/
	qsort(t,i,sizeof(t[0]),cmp);
	int x=0;
	while(x<i){
		if((t[x].month==month+1)||(t[x].month==month&&t[x].day>day)||(t[x].month==month&&t[x].day==day&&t[x].hour>hour)){
		printf("%14s%13s           %d��%2d��%2dʱ           %d\n",t[x].name,t[x].id,t[x].month,t[x].day,t[x].hour,t[x].room); 
		}
		x++;
	}
	printf("\n\n\n                         Tips:���������\n");
	getch();
	return; 
}
