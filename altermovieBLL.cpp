#include "struct.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void writefilemovie(nodemovie *head);
nodemovie *getfilemovie();
//�޸�ӰƬ�ƻ����� 
void altermovieBLL(int n,int month,int day,int hour,int room){
	nodemovie *p,*head=getfilemovie();
	p=head;
	p=p->next;
	int i=1;
	while(1){
		if(i==n){
			p->month=month;
			p->day=day;
			p->room=room;
			p->hour=hour;
			break;
		}
		p=p->next;
		i++;
	}
	//��������
	writefilemovie(head); 
	return ;
}
