#include "struct.h"
#include <io.h> 
#include <stdio.h>
#include <stdlib.h>


//�û��ļ���ȡ����,��������ռ䣬�����ݴ��û������ļ���ȡ������������ռ��У��������׵�ַ 
node *getfileid(){
	node * head ,*p,*pnew;
	FILE *fp;
	fp=fopen("userdata.txt","r+");
	head=p=(node *)malloc(sizeof(node));
	while(1){
		pnew=(node *)malloc(sizeof(node));
		if(fscanf(fp,"%s %s %d",pnew->id,pnew->key,&pnew->position)==EOF){
			p->next=NULL;
			free(pnew); 
			break;
		}
		p->next=pnew;
		p=p->next;
	}
	fclose(fp);
	
	return head;
}
