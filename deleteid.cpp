#include "struct.h"
#include <stdio.h>
#include <string.h>


void writefileidw(node *);
node * getfileid();
//id删除函数
void deleteid(char *id){
	node * head=getfileid();//调用id文件提取函数得到文件所有内容;
	node* p=(head),*q=(head);
	p=p->next;
	while(p!=NULL){
		if(strcmp(id,p->id)==0){
			q->next=p->next;
			break;
		}
		p=p->next;
		q=q->next;
	}
	//修改之后重新写入文件
	writefileidw(head);//把head里面的所有内容全部写入userdata文件 
	return ;
} 
