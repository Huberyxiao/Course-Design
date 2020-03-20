#include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"


//销售文件打开函数 
nodesell *getfilesell(){
	nodesell * head ,*p,*pnew;
	FILE *fp;
	fp=fopen("selldata.txt","r+");
	head=p=(nodesell *)malloc(sizeof(nodesell));
	while(1){
		pnew=(nodesell *)malloc(sizeof(nodesell));
		if(fscanf(fp,"%s %s %s %d %d %d %d ",pnew->userid,pnew->name,pnew->movieid,&pnew->month,&pnew->day,&pnew->hour,&pnew->room)==EOF){
			free(pnew);
			p->next=NULL;
			break;
		}
		p->next=pnew;
		p->name;
		p->room;
		p=p->next;
	}
	fclose(fp);
	

	return head;
}
