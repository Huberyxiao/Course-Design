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
//�鿴�����ļ� 
void lookmovie(){
	system("cls");
	printf("********************************************************************\n");
	printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
	printf("\033[40;35m                           �鿴ӰƬ�ݳ��ƻ�\n\033[0m");
	printf("                            ȫ���ƻ�\n");
	printf("    _____________________________________________________________\n");
	printf("     ��Ӱ����         ID            ��ӳʱ��             Ӱ��\n"); 
	//���õ�Ӱ�ļ��򿪺���  ֱ�ӷ��ʵ�����,��ӡȫ����Ӱ�ŵ����� 
	nodemovie t[1000]; 
	int i;
	nodemovie *head=getfilemovie();
	nodemovie * p=head;
	p=p->next;
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
	qsort(t,i,sizeof(t[0]),cmp2);
	int j=0;
	while(j<i){
		printf("%14s%13s           %d��%2d��%2dʱ           %d\n",t[j].name,t[j].id,t[j].month,t[j].day,t[j].hour,t[j].room); 
		j++;
	}
	printf("   ����������أ�");
	getch();
	return;
} 
