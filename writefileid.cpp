#include <stdio.h>
#include <io.h>


//id׷��д����
void writefileid(char *id,char *key,int position){
	FILE *fp=fopen("userdata.txt","a+");
	fprintf(fp," %s %s %d \n",id,key,position);
	fclose(fp);
	return ;
}
