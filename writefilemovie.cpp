#include "struct.h"
#include <stdio.h>
#include <io.h>
#include <stdlib.h>
//电影文件写入函数 
void writefilemovie(nodemovie*head){
	FILE *fp=fopen("moviedata.txt","w+");
	nodemovie *p=head;
	p=p->next;
	while(p!=NULL){
		fprintf(fp," %s %s %d %d %d %d \n",p->name,p->id,p->month,p->day,p->hour,p->room);
		p=p->next;
	}
	fclose(fp);
	p=head;
	while(p!=NULL){
		head=head->next;
		free(p);
		p=head;
	}
	return ;
} 
