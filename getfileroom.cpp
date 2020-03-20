#include <stdio.h>
#include "struct.h"
#include <io.h>
#include <stdlib.h> 

//现存影厅文件 提取函数 
noderoom *getfileroom(){
	noderoom * head ,*p,*pnew;
	FILE *fp;
	fp=fopen("room.txt","r+");
	head=p=(noderoom *)malloc(sizeof(noderoom));
	while(1){
		pnew=(noderoom *)malloc(sizeof(noderoom));
		if(fscanf(fp,"%d %d",&pnew->room,&pnew->people)==EOF){
			p->next=NULL;
			free(pnew); 
			break;
		}
		p->next=pnew;
		p=p->next;
	}
	fclose(fp);
	return head;
}
