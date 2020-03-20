#include "struct.h"
#include "string.h" 
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int idcheck(node userid); 



//第一界面交互函数 ，返回身份信息(系统管理员返回1，客户返回2，售票员返回3，影院管理员返回4)
node display1(){
	system("cls"); 
	int i=0,k=0,t=0,ret=0,j;
	char c;
	node userid;
	memset(userid.id,0,sizeof(userid.id));
	memset(userid.key,0,sizeof(userid.key));
	printf("********************************************************************\n");
	printf("**************************欢迎光临银河影院**************************\n\n\n\n");
	printf("                           ID:\n");
	printf("                           key:\n");
	printf("                           登录\n\n\n\n");
	printf("            tips:按小键盘的↑和↓来移动光标,回车确认！\n"); 
	while(1){//移动光标的循环
		c=getch();
		if(c==27){
			userid.position=0;
			return userid;
		}
		if(c==72){//向上移动 
			if(i>1){
				i--;
				system("cls"); 
				if(i==1){
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n\n");
					
					printf("\033[40;34m                           ID:\033[0m");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					printf("                           key:");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					printf("                           登录\n\n\n\n");
					printf("            tips:按小键盘的↑和↓来移动光标,回车确认！\n");
				}
				if(i==2){
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n\n");
					printf("                           ID:");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					
					printf("\033[40;34m                           key:\033[0m");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					printf("                           登录\n\n\n\n"); 
					printf("            tips:按小键盘的↑和↓来移动光标,回车确认！\n");
				}
				if(i==3){
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n\n");
					printf("                           ID:");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					printf("                           key:");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					printf("\033[40;34m                           登录\033[0m\n\n\n\n");
					
					printf("            tips:按小键盘的↑和↓来移动光标,回车确认！\n");
				}
			}
		}
		else if(c==80){//向下移动 
			if(i<3){
				i++;
				system("cls"); 
				if(i==1){
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n\n");
					
					printf("\033[40;34m                           ID:\033[0m");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					printf("                           key:");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					printf("                           登录\n\n\n\n");
					printf("            tips:按小键盘的↑和↓来移动光标,回车确认！\n");
				}
				if(i==2){
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n\n");
					printf("                           ID:");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					
					printf("\033[40;34m                           key:\033[0m");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					printf("                           登录\n\n\n\n"); 
					printf("            tips:按小键盘的↑和↓来移动光标,回车确认！\n");
				}
				if(i==3){
					
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n\n");
					printf("                           ID:");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					printf("                           key:");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					printf("\033[40;34m                           登录\033[0m\n\n\n\n"); 
					
					printf("            tips:按小键盘的↑和↓来移动光标,回车确认！\n");
				}
			}
		}
		else if(c<='9'&&c>='0'&&i==1&&userid.id[9]==0){//输入id 
				k=0;
				while(userid.id[k]!=0){
					k++;
				}
			while(c!='\r'&&k<10){
				
				userid.id[k]=c;
					system("cls");
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n\n");
					printf("\033[40;34m                           ID:\033[0m");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					printf("                           key:");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					
					
					printf("                           登录\n\n\n\n"); 
					printf("            tips:按小键盘的↑和↓来移动光标,回车确认！\n");
				k++;
				c=getch();
				if(!(c>='0'&&c<='9')){
					break;
				}
				 
			}
			userid.id[k]=0;
			k=0;
		}
		else if(c<='9'&&c>='0'&&i==2&&userid.key[9]==0){//输入key 
				k=0;
				while(userid.key[k]!=0){
					k++;
				}
			while(c!='\r'&&k<10){
			
				userid.key[k]=c;
					system("cls");
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n\n");
					printf("                           ID:");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					printf("\033[40;34m                           key:\033[0m");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					
					printf("                           登录\n\n\n\n"); 
					printf("            tips:按小键盘的↑和↓来移动光标,回车确认！\n");
				k++;
				c=getch();
				if(!(c>='0'&&c<='9')){
					break;
				}
			}
			userid.key[k]=0;
			k=0;
		}
		else if(c=='\b'&&i==1){//id退格 
			t=10;
			while(t>=0){
				if(userid.id[t]!=0){
					userid.id[t]=0;
					break;
				}
				t--;
			}
			//清屏刷新
					system("cls");
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n\n");
					printf("\033[40;34m                           ID:\033[0m");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					printf("                           key:");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					
					
					printf("                           登录\n\n\n\n");
					printf("            tips:按小键盘的↑和↓来移动光标,回车确认！\n");
		}
		else if(c=='\b'&&i==2){//key退格 
			t=10;
			while(t>=0){
				if(userid.key[t]!=0){
					userid.key[t]=0;
					break;
				}
				t--;
			}
			//清屏刷新
					system("cls");
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n\n");
					printf("                           ID:");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					printf("\033[40;34m                           key:\033[0m");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					
					printf("                           登录\n\n\n\n"); 
					printf("            tips:按小键盘的↑和↓来移动光标,回车确认！\n"); 
		}
		else if(c=='\r'&&i==3){//选择登录，则将数据传进身份验证函数 
			ret=idcheck(userid);
			userid.position=ret;
			if(ret){//身份通过，系统管理员返回1，客户返回2，售票员返回3，影院管理员返回4 
				return userid;
			}
			else {//身份不通过，刷新屏幕 
				memset(userid.id,0,sizeof(userid.id));
				memset(userid.key,0,sizeof(userid.key));
						system("cls");
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n\n");
					printf("                           ID:\n");
					printf("                           key:\n");
					printf("                           登录\n\n\n\n");
					printf("            tips:按小键盘的↑和↓来移动光标,回车确认！\n"); 
					printf("\033[40;31m            您的密码或账号错误！按↑键重新输入\033[0m"); 
			}
		}
	}
	 
 } 
