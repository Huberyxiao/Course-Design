#include "struct.h"
#include <stdio.h>
#include <string.h> 



node *getfileid();
//id查找函数，如果找到，返回1 
int findid(char *id){
	node * head =getfileid();//调用id文件提取函数得到文件所有内容;
	node* p=(head); 
	while(p!=NULL){
		if(strcmp(id,p->id)==0){
			return 1;
		}
		p=p->next;
	}
	return 0;
} 
