#include <stdio.h>
#include <windows.h>
#include "struct.h"
#include <conio.h>

void writefilesellw(nodesell *head);
nodesell *getfilesell();
//��Ʊ������ 
void refund(char * id){
	system("cls");
	printf("********************************************************************\n");
	printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
	printf("\033[40;35m                             ��Ʊ\n\n\n\033[0m");
	//���������ļ��������id��Ӧ��������г��� 
	printf("    _____________________________________________________________\n");
	printf("         ��Ӱ����         ID            ��ӳʱ��             Ӱ��\n");
	nodesell *head=getfilesell();
	nodesell *p=head;
	p=p->next;
	if(p==NULL){
		printf("   ����ǰ��δ�����κε�ӰƱ\n");
		printf("   �����������\n");
		fflush(stdin);
		getch();
		return;  
	}
	int i=1,n;
	while(p!=NULL){
		printf("   %d%13s%12s           %d��%2d��%2dʱ           %d\n",i,p->name,p->movieid,p->month,p->day,p->hour,p->room);
		i++; 
		p=p->next;
	}
	printf("    ����������Ҫ�˵ĵ�ӰƱ���:"); 
	while(1){
		if(scanf("%d",&n)!=1){
			printf("    ���������������������룺");
			fflush(stdin);
			continue;
		}
		else if(n>=i||n<=0){
			printf("    ���������������������룺");
			fflush(stdin);
			continue;
		}
		break;
	}
	int j=1;
	p=head;
	while(1){
		if(j==n){
			p->next=p->next->next;
			break;
		}
		p=p->next;
		j++;
	}
	writefilesellw(head);
	printf("   ��ϲ���ɹ���Ʊ\n");
	printf("   �����������\n");
	fflush(stdin);
	getch();
	return ;
}
