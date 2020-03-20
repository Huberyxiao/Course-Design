#include "struct.h"
#include <windows.h>
#include <conio.h>
#include <stdio.h>
nodemovie *getfilemovie(); 
int roomcheck(int room);
//影厅排片计划查询 
void findroomplanUI(){
	system("cls");
	int ret=1,room;
	char c;
	printf("********************************************************************\n");
	printf("**************************欢迎光临银河影院**************************\n\n\n");
	printf("\033[40;35m                           影院售票端\n\n\033[0m");
	printf("                           影厅演出查询\n\n");
	printf("      请输入要查询的影厅号:");
	while(1){
		if(scanf("%d",&room)!=1){
			fflush(stdin);
			printf("\033[40;31m      您输入的影厅号不合法请重新输入：\033[0m");
			continue;
		}
		else if(roomcheck(room)==0){
			fflush(stdin);
			printf("\033[40;31m      您输入的影厅号不存在请重新输入：\033[0m");
			continue;
		}
		break;
	}  
	//直接调用文件提取函数
	nodemovie *head=getfilemovie();
	nodemovie *p=head;
	p=p->next;
	printf("      _____________________________________________________________\n");
	printf("       电影名称         ID            上映时间             影厅\n"); 
	while(p!=NULL){
		if(p->room==room){
			printf("%16s%13s           %d月%2d日%2d时           %d\n",p->name,p->id,p->month,p->day,p->hour,p->room);
			ret=0;
		}
		p=p->next;
	}
	if(ret){
		printf("      该影厅未安排放映\n"); 
	}
	printf("      输入任意键返回\n");
	getch();
	return ;
}
