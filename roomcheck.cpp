#include "struct.h"
#include <stdio.h>


noderoom *getfileroom();
//room检查是否存在函数 返回0时说明当前已开通影厅中没有这个影厅 反回1说明已开通 
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
