#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

void writefileid(char *id,char *key,int position); 
//�û�id���Ӻ���
void addid(char *id,char *key,int position){
	//����id׷��д������׷���û���Ϣ
	writefileid(id,key,position); 
	return;
} 
