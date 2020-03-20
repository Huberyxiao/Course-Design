#include <stdio.h>
#include "struct.h"
#include <stdlib.h>
#include <string.h>

node* getfileid();
//顾客身份验证 
int clientcheck(char *id){
	node* head=getfileid(); //从用户数据文件提取函数中数据的首地址
	node* p=(head); 
	while(p!=NULL){
		if(strcmp(id,p->id)==0){
			return p->position;//系统管理员返回1，客户返回2，售票员返回3，影院管理员返回4 
		}
		p=p->next;
	}
	return 0;//返回0，查询不到 
} 
