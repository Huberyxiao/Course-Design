#include <stdio.h>
#include <io.h>
#include <stdlib.h>



//ÐÂ¼Ó¹ºÂò¼ÇÂ¼ 
void writefilesell(char userid[],char moviename[],char movieid[],int month,int day,int hour,int room){
	FILE *fp=fopen("selldata.txt","a+");
	fprintf(fp," %s %s  %s %d %d %d %d  \n",userid,moviename,movieid,month,day,hour,room);
	fclose(fp);
	return;
}
