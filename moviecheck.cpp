#include "struct.h"
#include <stdio.h>
#include <string.h>



nodemovie *getfilemovie();
//����Ӱid�������Ƿ�ƥ�� ����0ʱ��˵������id�������ƺ�ԭ�е�Ӱ���Ʋ���ͬ
int moviecheck(char name[],char id[]){
	nodemovie *head=getfilemovie();
	nodemovie *p=head;
	p=p->next;
	while(p!=NULL){
		if(strcmp(id,p->id)==0){
			if(strcmp(name,p->name)!=0){
				return 0;
			}
		}
		if(strcmp(name,p->name)==0){
			if(strcmp(id,p->id)!=0){
				return 0;
			}
		}
		p=p->next;
	}
	return 1;
}
