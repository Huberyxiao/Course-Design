#include "struct.h"
#include <windows.h>
#include <conio.h>
#include <stdio.h>
nodemovie *getfilemovie(); 
int roomcheck(int room);
//Ӱ����Ƭ�ƻ���ѯ 
void findroomplanUI(){
	system("cls");
	int ret=1,room;
	char c;
	printf("********************************************************************\n");
	printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
	printf("\033[40;35m                           ӰԺ��Ʊ��\n\n\033[0m");
	printf("                           Ӱ���ݳ���ѯ\n\n");
	printf("      ������Ҫ��ѯ��Ӱ����:");
	while(1){
		if(scanf("%d",&room)!=1){
			fflush(stdin);
			printf("\033[40;31m      �������Ӱ���Ų��Ϸ����������룺\033[0m");
			continue;
		}
		else if(roomcheck(room)==0){
			fflush(stdin);
			printf("\033[40;31m      �������Ӱ���Ų��������������룺\033[0m");
			continue;
		}
		break;
	}  
	//ֱ�ӵ����ļ���ȡ����
	nodemovie *head=getfilemovie();
	nodemovie *p=head;
	p=p->next;
	printf("      _____________________________________________________________\n");
	printf("       ��Ӱ����         ID            ��ӳʱ��             Ӱ��\n"); 
	while(p!=NULL){
		if(p->room==room){
			printf("%16s%13s           %d��%2d��%2dʱ           %d\n",p->name,p->id,p->month,p->day,p->hour,p->room);
			ret=0;
		}
		p=p->next;
	}
	if(ret){
		printf("      ��Ӱ��δ���ŷ�ӳ\n"); 
	}
	printf("      �������������\n");
	getch();
	return ;
}
