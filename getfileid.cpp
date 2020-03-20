#include "struct.h"
#include <io.h> 
#include <stdio.h>
#include <stdlib.h>


//用户文件提取函数,申请链表空间，将数据从用户数据文件提取出来存在链表空间中，并返回首地址 
node *getfileid(){
	node * head ,*p,*pnew;
	FILE *fp;
	fp=fopen("userdata.txt","r+");
	head=p=(node *)malloc(sizeof(node));
	while(1){
		pnew=(node *)malloc(sizeof(node));
		if(fscanf(fp,"%s %s %d",pnew->id,pnew->key,&pnew->position)==EOF){
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
