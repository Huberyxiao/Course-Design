#include <stdio.h>
#include <windows.h>
#include <conio.h>

void refund(char * id);
void buy(char *id);
int findid(char *id);
void lookmovie();
void findroomplanUI();
int clientcheck(char *id); 
//售票端 
void sellman(){//
	char c,id[20];
	int i=0,t,j,x,ret;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************欢迎光临银河影院**************************\n\n\n");
	printf("\033[40;35m                           影院售票端\n\n\033[0m");
	printf("                           影片演出计划\n");
	printf("                           影厅出演查询\n");
	printf("                           售票\n");
	printf("                           退票\n\n");
	printf("               tips:按回车确认并进入！\n");
	printf("                    按Esc键结束程序!\n"); 
	while(1){
		c=getch();
		if(c==27){//Esc退出 
			break;
		}
		if(c==72){//向上 
			if(i>1){
				i--;
				system("cls");
				if(i==1){
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("\033[40;35m                           影院售票端\n\n\033[0m");
					printf("\033[40;32m                           影片演出计划\n\033[0m");
					printf("                           影厅出演查询\n");
					printf("                           售票\n");
					printf("                           退票\n\n");
					printf("               tips:按回车确认并进入！\n");
					printf("                    按Esc键结束程序!\n"); 
				}
				if(i==2){
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("\033[40;35m                           影院售票端\n\n\033[0m");
					printf("                           影片演出计划\n");
					printf("\033[40;32m                           影厅出演查询\n\033[0m");
					printf("                           售票\n");
					printf("                           退票\n\n");
					printf("               tips:按回车确认并进入！\n");
					printf("                    按Esc键结束程序!\n"); 
				}
				if(i==3){
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("\033[40;35m                           影院售票端\n\n\033[0m");
					printf("                           影片演出计划\n");
					printf("                           影厅出演查询\n");
					printf("\033[40;32m                           售票\n\033[0m");
					printf("                           退票\n\n");
					printf("               tips:按回车确认并进入！\n");
					printf("                    按Esc键结束程序!\n"); 
				}
			}
		}
		if(c==80){//向下 
			if(i<4){
				i++;
				system("cls");
				if(i==1){
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("\033[40;35m                           影院售票端\n\n\033[0m");
					printf("\033[40;32m                           影片演出计划\n\033[0m");
					printf("                           影厅出演查询\n");
					printf("                           售票\n");
					printf("                           退票\n\n");
					printf("               tips:按回车确认并进入！\n");
					printf("                    按Esc键结束程序!\n"); 
				}
				if(i==2){
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("\033[40;35m                           影院售票端\n\n\033[0m");
					printf("                           影片演出计划\n");
					printf("\033[40;32m                           影厅出演查询\n\033[0m");
					printf("                           售票\n");
					printf("                           退票\n\n");
					printf("               tips:按回车确认并进入！\n");
					printf("                    按Esc键结束程序!\n"); 
				}
				if(i==3){
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("\033[40;35m                           影院售票端\n\n\033[0m");
					printf("                           影片演出计划\n");
					printf("                           影厅出演查询\n");
					printf("\033[40;32m                           售票\n\033[0m");
					printf("                           退票\n\n");
					printf("               tips:按回车确认并进入！\n");
					printf("                    按Esc键结束程序!\n"); 
				}
				if(i==4){
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("\033[40;35m                           影院售票端\n\n\033[0m");
					printf("                           影片演出计划\n");
					printf("                           影厅出演查询\n");
					printf("                           售票\n");
					printf("\033[40;32m                           退票\n\n\033[0m");
					printf("               tips:按回车确认并进入！\n");
					printf("                    按Esc键结束程序!\n");
				}
			}
		}
		if(c=='\r'&&i==1){//进入影片演出计划查看界面，调用影片演出计划查看函数 
			lookmovie(); system("cls");
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("\033[40;35m                           影院售票端\n\n\033[0m");
					printf("\033[40;32m                           影片演出计划\n\033[0m");
					printf("                           影厅出演查询\n");
					printf("                           售票\n");
					printf("                           退票\n\n");
					printf("               tips:按回车确认并进入！\n");
					printf("                    按Esc键结束程序!\n"); 
		}
		if(c=='\r'&&i==2){//进入影厅出演查询界面，调用影厅出演查询函数 
			findroomplanUI();system("cls");
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("\033[40;35m                           影院售票端\n\n\033[0m");
					printf("                           影片演出计划\n");
					printf("\033[40;32m                           影厅出演查询\n\033[0m");
					printf("                           售票\n");
					printf("                           退票\n\n");
					printf("               tips:按回车确认并进入！\n");
					printf("                    按Esc键结束程序!\n"); 
		} 
		if(c=='\r'&&i==3){//进入售票界面，调用售票函数 
			printf("     请输入购票用户的ID:");
			//检查id的合法性 
				while(1){
					scanf("%s",id);
					j=0;
					x=0;
					while(id[j]!=0){
						if(!(id[j]<='9'&&id[j]>='0')){//判断是否全为数字 
							printf("\033[40;31m    您输入的id不合法请重新输入：\033[0m");
							x=1;
							break;
						}
						j++;
					}
					if(t==1){//如果上面已经出错，则重新输入 
						continue;
					}
					if(j>10){
						printf("\033[40;31m    该用户不存在请重新输入：\033[0m");
						continue;
					}
					ret=findid(id);//引用id查找函数,查到返回1，否则0 
					if(ret==0){
						printf("\033[40;31m    该用户不存在请重新输入：\033[0m");
						continue;
					}
					//判断id是否为顾客,如果是顾客返回2，不是顾客返回0 
					if(clientcheck(id)!=2){
						printf("\033[40;31m    该用户没有购退票权限请重新输入：\033[0m");
						continue;
					} 
					//走到这里说明id存在 
					break; 
				}
			//调用购买函数
			buy(id);system("cls");
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("\033[40;35m                           影院售票端\n\n\033[0m");
					printf("                           影片演出计划\n");
					printf("                           影厅出演查询\n");
					printf("\033[40;32m                           售票\n\033[0m");
					printf("                           退票\n\n");
					printf("               tips:按回车确认并进入！\n");
					printf("                    按Esc键结束程序!\n");			
		}
		if(c=='\r'&&i==4){//进入退票界面，调用退票函数
			printf("     请输入退票用户的ID:");
			//检查id的合法性 
				while(1){
					scanf("%s",id);
					j=0;
					x=0;
					while(id[j]!=0){
						if(!(id[j]<='9'&&id[j]>='0')){//判断是否全为数字 
							printf("\033[40;31m    您输入的id不合法请重新输入：\033[0m");
							x=1;
							break;
						}
						j++;
					}
					if(t==1){//如果上面已经出错，则重新输入 
						continue;
					}
					if(j>10){
						printf("\033[40;31m    该用户不存在请重新输入：\033[0m");
						continue;
					}
					ret=findid(id);//引用id查找函数,查到返回1，否则0 
					if(ret==0){
						printf("\033[40;31m    该用户不存在请重新输入：\033[0m");
						continue;
					}
					//判断id是否为顾客,如果是顾客返回2，不是顾客返回0 
					if(clientcheck(id)!=2){
						printf("\033[40;31m    该用户没有购退票权限请重新输入：\033[0m");
						continue;
					} 
					//走到这里说明id存在 
					break; 
				}
			//调用退票函数
			refund(id);system("cls");
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("\033[40;35m                           影院售票端\n\n\033[0m");
					printf("                           影片演出计划\n");
					printf("                           影厅出演查询\n");
					printf("                           售票\n");
					printf("\033[40;32m                           退票\n\n\033[0m");
					printf("               tips:按回车确认并进入！\n");
					printf("                    按Esc键结束程序!\n");
		} 
	} 
	return ;
}
