#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

void writefileid(char *id,char *key,int position); 
//用户id增加函数
void addid(char *id,char *key,int position){
	//调用id追加写函数，追加用户信息
	writefileid(id,key,position); 
	return;
} 
