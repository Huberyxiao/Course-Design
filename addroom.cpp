#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

noderoom *getfileroom();
void writefileroom(noderoom *head);
//Ӱ����Ӻ��� 
void addroom(int room,int people){
	noderoom *head=getfileroom();
	noderoom *p=(head);
	noderoom *pnew=(noderoom*)malloc(sizeof(noderoom));
	pnew->room=room;
	pnew->people=people;
	while(p->next!=NULL){
		p=p->next;
	}
	
	p->next=pnew;
	pnew->next=NULL;
	writefileroom(head);//����Ӱ���ļ� 
	return ;
}
