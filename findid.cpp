#include "struct.h"
#include <stdio.h>
#include <string.h> 



node *getfileid();
//id���Һ���������ҵ�������1 
int findid(char *id){
	node * head =getfileid();//����id�ļ���ȡ�����õ��ļ���������;
	node* p=(head); 
	while(p!=NULL){
		if(strcmp(id,p->id)==0){
			return 1;
		}
		p=p->next;
	}
	return 0;
} 
