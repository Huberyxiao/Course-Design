#include "struct.h"
#include <stdio.h>
#include <string.h>


void writefileidw(node *);
node * getfileid();
//idɾ������
void deleteid(char *id){
	node * head=getfileid();//����id�ļ���ȡ�����õ��ļ���������;
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
	//�޸�֮������д���ļ�
	writefileidw(head);//��head�������������ȫ��д��userdata�ļ� 
	return ;
} 
