#include <stdio.h>
#include "struct.h"
#include <conio.h>
#include <windows.h>


void altermovieBLL(int n,int month,int day,int hour,int room);
nodemovie * getfilemovie();
int roomcheck(int room);
//修改电影排挡UI函数 
void altermovieUI(){
	int i=1,n,month,day,room,hour;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************欢迎光临银河影院**************************\n\n\n");
	printf("\033[40;35m                           修改影片演出计划\n\033[0m");
	printf("                            全部计划\n");
	printf("    _____________________________________________________________\n");
	printf("         电影名称         ID            上映时间             影厅\n"); 
	//调用电影文件打开函数  直接访问第三层,打印全部电影排挡数据 
	nodemovie *head=getfilemovie();
	nodemovie *p=head;
	p=p->next;
	if(p==NULL){
		printf("    当前无演出计划！\n    按任意键返回");
		getch(); 
		return;
	}
	while(p!=NULL){
		printf("   %d%12s%14s           %d月%2d日%2d时           %d\n",i,p->name,p->id,p->month,p->day,p->hour,p->room); 
		p=p->next;
		i++;
	}
	printf("    请输入你想要修改计划的序号:"); 
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
	printf("    请输入你想要修改后的月份、日期时间和影厅（空格间隔）:\n");
	printf("       ");
	while(1){
		//判断月份和日期
			if(scanf("%d",&month)!=1){
				printf("    您的输入有误，请重新输入：");
				fflush(stdin);
				continue;
			}
			if(scanf("%d",&day)!=1){
				printf("    您的输入有误，请重新输入：");
				fflush(stdin);
				continue;
			}
			if(month>12){
				printf("    您的输入有误，请重新输入：");
				fflush(stdin);
				continue;
			}
			if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
				if(day>31){
					printf("    您的输入有误，请重新输入：");
					fflush(stdin);
					continue;
				}
			}
			if(month==4||month==6||month==9||month==11){
				if(day>30){
					printf("    您的输入有误，请重新输入：");
					fflush(stdin);
					continue;
				}
			}
			if(month==2&&day>29){
				printf("    您的输入有误，请重新输入：");
				fflush(stdin);
				continue;
			}
		//判断时间是否正确
			if(scanf("%d",&hour)!=1){
				printf("   您的输入有误，请重新输入：");
				fflush(stdin);
				continue;
			}
			else if(hour<0||hour>=24){
				printf("   您的输入有误，请重新输入：");
				fflush(stdin);
				continue;
			}
		//判断影厅是否存在
			if(scanf("%d",&room)!=1){
				printf("    您的输入有误，请重新输入：");
				fflush(stdin);
				continue;
			}
			else{//判断影厅是否存在 
				 if(roomcheck(room)==0){//返回0时说明当前已开通影厅中没有这个影厅 
				 	printf("    不存在此影厅，请重新输入：");
					fflush(stdin);
					continue;
				 }
			}
		//走到此处说明数据输入合法
		break;
	}
	altermovieBLL(n,month,day,hour,room);
	printf("    恭喜您成功修改第%d号计划\n    按任意键返回",n);
	getch(); 
	
	return;
} 
