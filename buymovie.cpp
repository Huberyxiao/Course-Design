#include <stdio.h>
#include <windows.h>
#include "struct.h"
#include <stdlib.h>
#include <conio.h>
#include <string.h>


void writefilesell(char userid[],char moviename[],char movieid[],int month,int day,int hour,int room);
nodemovie *findmovie(char *name);
nodesell *getfilesell();
noderoom *getfileroom();
//��Ʊ 
void buy(char * id){
	char name[50];
	int i=1,n;
	nodesell sell;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
	printf("\033[40;35m                             ��Ʊ\n\n\n\033[0m");
	printf("    ������Ҫ��ѯ�ĵ�Ӱ���ƣ�");
	scanf("%s",name);
	nodemovie *head=findmovie(name);//ģ������ 
	nodemovie *p=head;
	p=p->next;
	printf("    _____________________________________________________________\n");
	printf("         ��Ӱ����         ID            ��ӳʱ��             Ӱ��\n");
	if(p==NULL){
		printf("   ��ѯ�޽��\n");
		printf("   �����������\n");
		fflush(stdin);
		getch();
		return; 
	}
	while(p!=NULL){
		printf("   %d%13s%12s           %d��%2d��%2dʱ           %d\n",i,p->name,p->id,p->month,p->day,p->hour,p->room);
		i++;
		p=p->next;
	}
	printf("    ����������Ҫ����ӰƬ�����:"); 
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
	p=p->next;
	while(1){
		if(j==n){
			strcpy(sell.userid,id);
			strcpy(sell.name,p->name);
			strcpy(sell.movieid,p->id);
			sell.month=p->month;
			sell.day=p->day;
			sell.hour=p->hour;
			sell.room=p->room;
			break;
		}
		p=p->next;
		j++;
	}
	//���������¼�������Ʊ
			nodesell *Head=getfilesell(); 
			nodesell *q=Head;
			q=q->next;
			int count=0;
			while(q!=NULL){
				if(strcmp(q->name,sell.name)==0){
					if(strcmp(q->movieid,sell.movieid)==0){
						if(q->month==sell.month){
							if(q->day==sell.day){
								if(q->hour==sell.hour){
									if(q->room==sell.room){
										count++;
									}
								}
							}
						}
					}
				}
				q=q->next;
			} 	
	noderoom *HEAD=getfileroom(); 
	noderoom *pr=HEAD;
	pr=pr->next;
	int people;
	while(pr!=NULL){
		if(pr->room==sell.room){
			people=pr->people;
			break;
		}
		pr=pr->next;
	}
	printf("   ��ǰ������Ʊ:%d\n",people-count);
	if(people-count==0){
		printf("   ��ǰ������ƱΪ0\n");
		printf("   �����������\n");
		fflush(stdin);
		getch();
		return ;
	} 
	writefilesell(sell.userid,sell.name,sell.movieid,sell.month,sell.day,sell.hour,sell.room);
	printf("   ��ϲ���ɹ�����\n");
	printf("   �����������\n");
	fflush(stdin);
	getch();
	return ;
}
