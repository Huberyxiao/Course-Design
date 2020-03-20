#include <stdio.h>
#include <windows.h>
#include "struct.h"
#include <conio.h>

void writefilesellw(nodesell *head);
nodesell *getfilesell();
//退票函数： 
void refund(char * id){
	system("cls");
	printf("********************************************************************\n");
	printf("**************************欢迎光临银河影院**************************\n\n\n");
	printf("\033[40;35m                             退票\n\n\n\033[0m");
	//遍历销售文件，输出此id对应购买的所有场次 
	printf("    _____________________________________________________________\n");
	printf("         电影名称         ID            上映时间             影厅\n");
	nodesell *head=getfilesell();
	nodesell *p=head;
	p=p->next;
	if(p==NULL){
		printf("   您当前并未订购任何电影票\n");
		printf("   按任意键返回\n");
		fflush(stdin);
		getch();
		return;  
	}
	int i=1,n;
	while(p!=NULL){
		printf("   %d%13s%12s           %d月%2d日%2d时           %d\n",i,p->name,p->movieid,p->month,p->day,p->hour,p->room);
		i++; 
		p=p->next;
	}
	printf("    请输入你想要退的电影票序号:"); 
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
	while(1){
		if(j==n){
			p->next=p->next->next;
			break;
		}
		p=p->next;
		j++;
	}
	writefilesellw(head);
	printf("   恭喜您成功退票\n");
	printf("   按任意键返回\n");
	fflush(stdin);
	getch();
	return ;
}
