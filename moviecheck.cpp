#include "struct.h"
#include <stdio.h>
#include <string.h>



nodemovie *getfilemovie();
//检查电影id和名称是否匹配 返回0时，说明已有id且新名称和原有电影名称不相同
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
