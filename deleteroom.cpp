#include <stdio.h>
#include "struct.h"


void writefileroom(noderoom *head );
noderoom * getfileroom();
void deletemovier(int room); //����Ӱ��ɾ����Ӱ�ŵ� 
//Ӱ��ɾ�� 
void deleteroom(int room){
	noderoom * head=getfileroom();//����id�ļ���ȡ�����õ��ļ���������;
	noderoom * p=(head),*q=(head);
	p=p->next;
	while(p!=NULL){
		if(p->room==room){
			q->next=p->next;
			break;
		}
		p=p->next;
		q=q->next;
	}
	//�޸�֮������д���ļ�
	writefileroom(head);//��head�������������ȫ��д��userdata�ļ� 
	//��Ҫͬʱɾ����ӦӰ����ӰƬ�ŵ��ļ� 
	deletemovier(room); 
	return ;
	
}
