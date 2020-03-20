#include <stdio.h>
#include "struct.h"
#include <string.h>
#include <stdlib.h>


void writefilemovie(nodemovie *head);
nodemovie *getfilemovie();
//电影添加函数 
void addmovieBLL(char name[],char id[],int month,int day,int hour,int room){
	FILE *fp=fopen("moviedata.txt","a+");
	fprintf(fp," %s %s %d %d %d %d \n",name,id,month,day,hour,room);
	fclose(fp);
	return;
}
