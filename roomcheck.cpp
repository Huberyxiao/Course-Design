#include "struct.h"
#include <stdio.h>


noderoom *getfileroom();
//room����Ƿ���ں��� ����0ʱ˵����ǰ�ѿ�ͨӰ����û�����Ӱ�� ����1˵���ѿ�ͨ 
int roomcheck(int room){
	noderoom *head=getfileroom();
	noderoom *p=(head)->next; 
	while(p!=NULL){
		if(room==p->room){
			return 1;
		}
		p=p->next;
	}
	return 0;
} 
