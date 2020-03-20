#include <stdio.h>
#include "struct.h"
#include <string.h>
#include <stdlib.h>


void writefilemovie(nodemovie *head);
nodemovie *getfilemovie();
//删除影片计划函数 
void deletemovieBLL(int n){
	nodemovie *p,*head=getfilemovie();
	p=head;
	int i=1;
	while(1){
//		printf("*%d*\n",i);
		if(i==n){
//			printf("*%s*\n",p->next->name);
			p->next=p->next->next;
			break;
		}
		p=p->next;
		i++;
	}
	//更新数据
	writefilemovie(head); 
	return;
}
