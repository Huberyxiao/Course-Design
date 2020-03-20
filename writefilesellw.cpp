#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include "struct.h" 



//销售文件重新写入函数 
void writefilesellw(nodesell *head){
	FILE *fp=fopen("selldata.txt","w+");
	nodesell *p=head;
	p=p->next;
	while(p!=NULL){
		fprintf(fp," %s %s %s %d %d %d %d \n",p->userid,p->name,p->movieid,p->month,p->day,p->hour,p->room);
		p=p->next;
	}
	fclose(fp);
	p=head;
	while(p!=NULL){
		head=head->next;
		free(p);
		p=head;
	}
	return;
}
