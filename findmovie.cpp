#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include <string.h>

int mohu(char * key,char * str);
nodemovie *getfilemovie();
//模糊查找函数，返回一个所有搜索结果的链表 
nodemovie *findmovie(char *name){
	nodemovie *Head,*q,*qnew;
	Head=q=(nodemovie *)malloc(sizeof(nodemovie));
	
	nodemovie *head=getfilemovie();
	nodemovie *p=head;
	p=p->next;
	while(p!=NULL){
		/*
		if(mohu(name,p->name)==1){
			qnew=(nodemovie *)malloc(sizeof(nodemovie));
			qnew->month=p->month;
			qnew->day=p->day;
			qnew->hour=p->hour;
			qnew->room=p->room;
			strcpy(qnew->name,p->name);
			strcpy(qnew->id,p->id);
			q->next=qnew;
			q=q->next;
		}
		*/
		if(strstr(p->name,name)!=NULL){
			qnew=(nodemovie *)malloc(sizeof(nodemovie));
			qnew->month=p->month;
			qnew->day=p->day;
			qnew->hour=p->hour;
			qnew->room=p->room;
			strcpy(qnew->name,p->name);
			strcpy(qnew->id,p->id);
			q->next=qnew;
			q=q->next;
		}
		p=p->next;
	}
	q->next=NULL;
	return Head;
}
