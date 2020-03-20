#include "struct.h" 
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
void writefileidw(node *head){
	FILE *fp=fopen("userdata.txt","w+");
	node *p=head;
	p=p->next;
	while(p!=NULL){
		fprintf(fp," %s %s %d \n",p->id,p->key,p->position);
		p=p->next;
	}
	fclose(fp);
	p=head;
	while(p!=NULL){
		head=head->next;
		free(p);
		p=head;
	}
	return;
}
