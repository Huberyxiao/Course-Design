#include "struct.h"
#include <stdio.h>
#include <string.h> 

node*  getfileid(); 
//身份验证函数，传进待检测身份数据，接收（调用）数据访问层函数返回的身份信息数据，进行核实筛选 
int idcheck(node userid)//传进待检测身份数据 
{
	node* head=getfileid(); //从用户数据文件提取函数中数据的首地址
	node* p=(head); 
	while(p!=NULL){
		if(strcmp(userid.id,p->id)==0&&strcmp(userid.key,p->key)==0){
			return p->position;//系统管理员返回1，客户返回2，售票员返回3，影院管理员返回4 
		}
		p=p->next;
	}
	return 0;//返回0，查询不到 
}
