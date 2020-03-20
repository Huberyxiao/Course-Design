#include "struct.h"
#include <io.h>
#include <stdio.h>
#include <stdlib.h>


//影片文件获取函数 
nodemovie *getfilemovie(){
	nodemovie * head ,*p,*pnew;
	FILE *fp;
	fp=fopen("moviedata.txt","r+");
	head=p=(nodemovie *)malloc(sizeof(nodemovie));
	while(1){
		pnew=(nodemovie *)malloc(sizeof(nodemovie));
		if(fscanf(fp,"%s %s %d %d %d %d",pnew->name,pnew->id,&pnew->month,&pnew->day,&pnew->hour,&pnew->room)==EOF){
			free(pnew);
			p->next=NULL;
			break;
		}
		p->next=pnew;
		p->name;
		p->room;
		p=p->next;
	}
	fclose(fp);
	

	return head;
}
