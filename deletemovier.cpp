#include <stdio.h>
#include "struct.h"
#include <stdlib.h>

void writefilemovie(nodemovie * head); 
nodemovie *getfilemovie();
//按照影厅删除电影排档 
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
	//更新数据
	writefilemovie(head);
	return ;
	head->next;
}
