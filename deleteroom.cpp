#include <stdio.h>
#include "struct.h"


void writefileroom(noderoom *head );
noderoom * getfileroom();
void deletemovier(int room); //按照影厅删除电影排档 
//影厅删除 
void deleteroom(int room){
	noderoom * head=getfileroom();//调用id文件提取函数得到文件所有内容;
	noderoom * p=(head),*q=(head);
	p=p->next;
	while(p!=NULL){
		if(p->room==room){
			q->next=p->next;
			break;
		}
		p=p->next;
		q=q->next;
	}
	//修改之后重新写入文件
	writefileroom(head);//把head里面的所有内容全部写入userdata文件 
	//需要同时删除对应影厅的影片排挡文件 
	deletemovier(room); 
	return ;
	
}
