#include "struct.h"
#include <stdio.h>
#include <string.h>


void writefileidw(node *head);
node * getfileid();
//�޸�id����
void alterid(char *id,char *key,int position){
	node * head=getfileid();//����id�ļ���ȡ�����õ��ļ���������;
	node* p=(head);
	while(p!=NULL){
		if(strcmp(id,p->id)==0){
			strcpy(p->key,key);
			p->position=position;
			break;
		}
		p=p->next;
	}
	//�޸�֮������д���ļ�
	writefileidw(head);//��head�������������ȫ��д��userdata�ļ� 
	return ;
} 
