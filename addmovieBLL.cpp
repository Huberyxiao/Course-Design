#include <stdio.h>
#include "struct.h"
#include <string.h>
#include <stdlib.h>


void writefilemovie(nodemovie *head);
nodemovie *getfilemovie();
//��Ӱ��Ӻ��� 
void addmovieBLL(char name[],char id[],int month,int day,int hour,int room){
	FILE *fp=fopen("moviedata.txt","a+");
	fprintf(fp," %s %s %d %d %d %d \n",name,id,month,day,hour,room);
	fclose(fp);
	return;
}
