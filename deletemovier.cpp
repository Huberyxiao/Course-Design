#include <stdio.h>
#include "struct.h"
#include <stdlib.h>

void writefilemovie(nodemovie * head); 
nodemovie *getfilemovie();
//����Ӱ��ɾ����Ӱ�ŵ� 
void deletemovier(int room){
	nodemovie *q,*p,*head=getfilemovie();
	p=head;
	q=head;
	p=p->next;
	while(p!=NULL){
		if(p->room==room){
			q->next=p->next;
			free(p);
			p=q->next;
			continue;
		}
		p=p->next;
		q=q->next;
	}
	//��������
	writefilemovie(head);
	return ;
	head->next;
}
