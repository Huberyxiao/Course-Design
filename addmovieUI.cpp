#include <stdio.h> 
#include <windows.h>
#include "struct.h"
#include <string.h>
#include <conio.h>


int roomcheck(int room);
int moviecheck(char name[],char id[]);
void addmovieBLL(char name[],char id[],int month,int day,int hour,int room); 
int  removiecheck(char name[],char id[],int month,int day,int hour,int room); 
//增加电影排挡 
void addmovieUI(){
	int ret=0,t;
	char id[100];
	nodemovie movie;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************欢迎光临银河影院**************************\n\n\n");
	printf("\033[40;35m                           增加影片演出计划\n\n\033[0m");
	printf("                     Tips:输入ID必须是六位纯数字\n");
	printf("                     	  输入月份和日期必须符合实际(不加前缀0)\n");
	printf("   请输入添加的影片名、ID、上映月、上映日、上映时间、上映影厅(中间用空格间隔):\n");
	printf("   ");
	while(1){
		
		//判断id是否符合条件
			scanf("%s %s",movie.name,movie.id);
			strcpy(id,movie.id);
			if(strlen(id)!=6){
				printf("   您的输入有误，请重新输入：");
				fflush(stdin);
				continue;
			}
			t=6;
			while(t--){
				if(!(id[t]>='0'&&id[t]<='9')){
					printf("   您的输入有误，请重新输入：");
					t=6;
					break;
				}
			}
			if(t==6){
				fflush(stdin);
				continue;
			}
			//printf("lalaal"); 
			//判断id和名字是否匹配
			if(moviecheck(movie.name,movie.id)==0){//返回0时，说明已有id且新名称和原有电影名称不相同 
				printf("   您的输入电影名、ID和已存在的不匹配，请重新输入：\n");
				printf("   "); 
				fflush(stdin);
				continue;
			}//printf("12345"); 
		//判断月份和日期
			if(scanf("%d",&movie.month)!=1){
				printf("   您的输入有误，请重新输入：");
				fflush(stdin);
				continue;
			}
			if(scanf("%d",&movie.day)!=1){
				printf("   您的输入有误，请重新输入：");
				fflush(stdin);
				continue;
			}
			if(movie.month>12){
				printf("   您的输入有误，请重新输入：");
				fflush(stdin);
				continue;
			}
			if(movie.month==1||movie.month==3||movie.month==5||movie.month==7||movie.month==8||movie.month==10||movie.month==12){
				if(movie.day>31){
					printf("   您的输入有误，请重新输入：");
					fflush(stdin);
					continue;
				}
			}
			if(movie.month==4||movie.month==6||movie.month==9||movie.month==11){
				if(movie.day>30){
					printf("   您的输入有误，请重新输入：");
					fflush(stdin);
					continue;
				}
			}
			if(movie.month==2&&movie.day>29){
				printf("   您的输入有误，请重新输入：");
				fflush(stdin);
				continue;
			}
		//判断时间是否正确
			if(scanf("%d",&movie.hour)!=1){
				printf("   您的输入有误，请重新输入：");
				fflush(stdin);
				continue;
			}
			else if(movie.hour<0||movie.hour>=24){
				printf("   您的输入有误，请重新输入：");
				fflush(stdin);
				continue;
			}
		//判断影厅是否存在
			if(scanf("%d",&movie.room)!=1){
				printf("   您的输入有误，请重新输入：");
				fflush(stdin);
				continue;
			}
			else{//判断影厅是否存在 
				 if(roomcheck(movie.room)==0){//返回0时说明当前已开通影厅中没有这个影厅 
				 	printf("   不存在此影厅，请重新输入：");
					fflush(stdin);
					continue;
				 }
			}
		//检查是否重复
			if(removiecheck(movie.name,movie.id,movie.month,movie.day,movie.hour,movie.room)==1){
				printf("   当前时段演出计划已存在，请重新输入：");
				fflush(stdin);
				continue;
			} 
		//走到此处说明数据输入合法
		 break;
	}
	//调用影片添加函数
	addmovieBLL(movie.name,movie.id,movie.month,movie.day,movie.hour,movie.room); 
	fflush(stdin);
	printf("   恭喜您成功加入新演出计划\n   按任意键返回！");
	getch();
	return ;
}
