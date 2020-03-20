#include <windows.h>
#include <stdio.h>
#include <conio.h> 

void alterid(char *id,char *key,int position);
void deleteid(char *id);
//用户id自我管理界面,传进自己的id,如果是注销或改密，就返回1，否则返回0； 
int myidmanage(char *id){
	int i=0,j,t;
	char c,key[18];
	system("cls");
	printf("********************************************************************\n");
	printf("**************************欢迎光临银河影院**************************\n\n\n");
	printf("                         您选择了自我ID管理！\n");
	printf("                               注销\n");
	printf("                               改密\n"); 
	printf("                      tips:↑↓控制选择，回车确认\n"); 
	printf("                           Esc退出\n");
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
					printf("                         您选择了自我ID管理！\n");
					printf("\033[40;32m                               注销\n\033[0m");
					printf("                               改密\n"); 
					printf("                      tips:↑↓控制选择，回车确认\n"); 
					printf("                           Esc退出\n");
				} 
			} 
		}
		if(c==80){//向下 
			if(i<2){
				i++;
				system("cls");
				if(i==1){
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("                         您选择了自我ID管理！\n");
					printf("\033[40;32m                               注销\n\033[0m");
					printf("                               改密\n"); 
					printf("                      tips:↑↓控制选择，回车确认\n"); 
					printf("                           Esc退出\n");
				}
				if(i==2){
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("                         您选择了自我ID管理！\n");
					printf("                               注销\n");
					printf("\033[40;32m                               改密\n\033[0m"); 
					printf("                      tips:↑↓控制选择，回车确认\n"); 
					printf("                           Esc退出\n");
				} 
			} 
		}
		if(c=='\r'&&i==1){//注销 id删除函数 
			deleteid(id);
			printf("      恭喜您成功注销！\n"); 
			return 1;
		} 
		if(c=='\r'&&i==2){//改密函数 
			printf("      密码均为数字且不超过十位！\n");
			printf("      请输入新密码："); 
			while(1){//输入并验证key 
				scanf("%s",key);
				//检查key的合法性
				j=0;
				t=0;
				while(key[j]!=0){
					if(!(key[j]<='9'&&key[j]>='0')){//判断是否全为数字 
						printf("\033[40;31m    您输入的密码不合法请重新输入：\033[0m");
						t=1;
						break;
					}
					j++;
				}
				if(t==1){//如果上面已经出错，则重新循环 
					continue;
				} 
				if(j>10&&t!=1){//之前为出错，判断是否超过十位 
					printf("\033[40;31m    您输入的密码不合法请重新输入：\033[0m");
					continue;
				}
				//能走到这里，说明都合法（位数，内容） ,跳出输入循环 
				break; 
			}
			//调用改密函数
			alterid(id,key,2);
			printf("      恭喜您成功改密！\n");
			return 1; 
		}
	}
	return 0;
} 
