#include "struct.h"
#include <stdio.h>
#include <conio.h>
#include <windows.h>

nodemovie * getfilemovie();
void deletemovieBLL(int n);
//��Ӱɾ������ 
void deletemovieUI(){
	int i=1,n;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
	printf("\033[40;35m                           ɾ��ӰƬ�ݳ��ƻ�\n\033[0m");
	printf("                            ȫ���ƻ�\n");
	printf("    _____________________________________________________________\n");
	printf("         ��Ӱ����         ID            ��ӳʱ��             Ӱ��\n"); 
	//���õ�Ӱ�ļ��򿪺���  ֱ�ӷ��ʵ�����,��ӡȫ����Ӱ�ŵ����� 
	nodemovie *p,*head=getfilemovie();
	p=head;
	p=p->next;
	if(p==NULL){
		printf("    ��ǰ���ݳ��ƻ���\n    �����������");
		getch(); 
		return;
	}
	while(p!=NULL){
		printf("   %d%13s%12s           %d��%2d��%2dʱ           %d\n",i,p->name,p->id,p->month,p->day,p->hour,p->room); 
		p=p->next;
		i++;
	}
	printf("    ����������Ҫɾ���ƻ������:"); 
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
	deletemovieBLL(n);
	printf("    ��ϲ���ɹ�ɾ����%d�żƻ�\n    �����������",n);
	getch(); 
	return ;
}
