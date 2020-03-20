#include <stdio.h>
#include <io.h>


//id×·¼ÓÐ´º¯Êý
void writefileid(char *id,char *key,int position){
	FILE *fp=fopen("userdata.txt","a+");
	fprintf(fp," %s %s %d \n",id,key,position);
	fclose(fp);
	return ;
}
