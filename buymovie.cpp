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
//买票 
void buy(char * id){
	char name[50];
	int i=1,n;
	nodesell sell;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************欢迎光临银河影院**************************\n\n\n");
	printf("\033[40;35m                             购票\n\n\n\033[0m");
	printf("    请输入要查询的电影名称：");
	scanf("%s",name);
	nodemovie *head=findmovie(name);//模糊查找 
	nodemovie *p=head;
	p=p->next;
	printf("    _____________________________________________________________\n");
	printf("         电影名称         ID            上映时间             影厅\n");
	if(p==NULL){
		printf("   查询无结果\n");
		printf("   按任意键返回\n");
		fflush(stdin);
		getch();
		return; 
	}
	while(p!=NULL){
		printf("   %d%13s%12s           %d月%2d日%2d时           %d\n",i,p->name,p->id,p->month,p->day,p->hour,p->room);
		i++;
		p=p->next;
	}
	printf("    请输入你想要购买影片的序号:"); 
	while(1){
		if(scanf("%d",&n)!=1){
			printf("    您的输入有误，请重新输入：");
			fflush(stdin);
			continue;
		}
		else if(n>=i||n<=0){
			printf("    您的输入有误，请重新输入：");
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
	//遍历购买记录，输出余票
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
	printf("   当前场次余票:%d\n",people-count);
	if(people-count==0){
		printf("   当前场次余票为0\n");
		printf("   按任意键返回\n");
		fflush(stdin);
		getch();
		return ;
	} 
	writefilesell(sell.userid,sell.name,sell.movieid,sell.month,sell.day,sell.hour,sell.room);
	printf("   恭喜您成功购买\n");
	printf("   按任意键返回\n");
	fflush(stdin);
	getch();
	return ;
}
