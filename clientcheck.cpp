#include <stdio.h>
#include "struct.h"
#include <stdlib.h>
#include <string.h>

node* getfileid();
//�˿������֤ 
int clientcheck(char *id){
	node* head=getfileid(); //���û������ļ���ȡ���������ݵ��׵�ַ
	node* p=(head); 
	while(p!=NULL){
		if(strcmp(id,p->id)==0){
			return p->position;//ϵͳ����Ա����1���ͻ�����2����ƱԱ����3��ӰԺ����Ա����4 
		}
		p=p->next;
	}
	return 0;//����0����ѯ���� 
} 
