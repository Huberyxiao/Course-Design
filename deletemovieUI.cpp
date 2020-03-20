#include "struct.h"
#include <stdio.h>
#include <conio.h>
#include <windows.h>

nodemovie * getfilemovie();
void deletemovieBLL(int n);
//电影删除界面 
void deletemovieUI(){
	int i=1,n;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************欢迎光临银河影院**************************\n\n\n");
	printf("\033[40;35m                           删除影片演出计划\n\033[0m");
	printf("                            全部计划\n");
	printf("    _____________________________________________________________\n");
	printf("         电影名称         ID            上映时间             影厅\n"); 
	//调用电影文件打开函数  直接访问第三层,打印全部电影排挡数据 
	nodemovie *p,*head=getfilemovie();
	p=head;
	p=p->next;
	if(p==NULL){
		printf("    当前无演出计划！\n    按任意键返回");
		getch(); 
		return;
	}
	while(p!=NULL){
		printf("   %d%13s%12s           %d月%2d日%2d时           %d\n",i,p->name,p->id,p->month,p->day,p->hour,p->room); 
		p=p->next;
		i++;
	}
	printf("    请输入你想要删除计划的序号:"); 
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
	deletemovieBLL(n);
	printf("    恭喜您成功删除第%d号计划\n    按任意键返回",n);
	getch(); 
	return ;
}
