#include "struct.h"
#include <stdio.h>
#include <string.h>


void writefileidw(node *head);
node * getfileid();
//修改id函数
void alterid(char *id,char *key,int position){
	node * head=getfileid();//调用id文件提取函数得到文件所有内容;
	node* p=(head);
	while(p!=NULL){
		if(strcmp(id,p->id)==0){
			strcpy(p->key,key);
			p->position=position;
			break;
		}
		p=p->next;
	}
	//修改之后重新写入文件
	writefileidw(head);//把head里面的所有内容全部写入userdata文件 
	return ;
} 
