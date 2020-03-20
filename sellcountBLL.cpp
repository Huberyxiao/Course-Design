#include <string.h>
#include <stdio.h>
#include "struct.h"
#include <stdlib.h>


nodesell *getfilesell();
//销售统计函数，返回一个 nodeboxoffice类型的头 
nodeboxoffice *sellcountBLL(){
	long int t,x=0,i;
	nodesell *head=getfilesell();//打开销售文件	
	nodesell *p=head;
	p=p->next;
	nodeboxoffice *a;
	a=(nodeboxoffice *)malloc(sizeof(nodeboxoffice)*1000010);
	memset(a,0,sizeof(a));
	while(p!=NULL){
		t=(p->movieid[0]-'0')*100000+(p->movieid[1]-'0')*10000+(p->movieid[2]-'0')*1000;
		t+=(p->movieid[3]-'0')*100+(p->movieid[4]-'0')*10+(p->movieid[5]-'0');
		a[t].boxoffice++;
		if(a[t].boxoffice<=1){
			strcpy(a[t].name,p->name);
			strcpy(a[t].id,p->movieid);
		}
		p=p->next;
	}
	nodeboxoffice *Head=(nodeboxoffice*)malloc(sizeof(nodeboxoffice));
	nodeboxoffice *q=Head;
	nodeboxoffice *pnew;
	for(i=x;i<=1000000;i++){
		if(a[i].boxoffice!=0){
			pnew=(nodeboxoffice*)malloc(sizeof(nodeboxoffice));
			x=i+1;
			strcpy(pnew->name,a[i].name);
			strcpy(pnew->id,a[i].id);
			pnew->boxoffice=a[i].boxoffice;
			q->next=pnew;
			q=q->next;
		}
	}
	q->next=NULL;
	/*
	q=Head->next;
	while(q!=NULL){
		printf("%s %s %d \n",q->name,q->id,q->boxoffice);
		q=q->next;
	}
	*/
	free(a);
	return Head;
}
