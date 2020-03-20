#include <stdio.h>
#include <io.h>
#include "struct.h" 
#include <stdlib.h>
//影厅写入文件 
void writefileroom(noderoom *head){
	FILE *fp=fopen("room.txt","w+");
	noderoom *p=(head);
	p=p->next;
	while(p!=NULL){
		fprintf(fp," %d %d \n",p->room,p->people);
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
