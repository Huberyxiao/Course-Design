#include <conio.h>
#include <stdio.h>
#include <windows.h>


int findid(char *id);
void addid(char *id,char *key,int position);
//注册函数 
void addidUI(){
	char id[15];
	char key[18];
	int ret,i,t;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************欢迎光临银河影院**************************\n\n\n");
	printf("                              客户注册\n\n\n");
	printf("\033[40;33m    tips：id和密码均不能超过十位\n          id和密码仅为数字\n\033[0m");
	printf("    请输入注册的用户ID:");
	//检查id的合法性 
		while(1){
			scanf("%s",id);
			i=0;
			t=0;
			while(id[i]!=0){
				if(!(id[i]<='9'&&id[i]>='0')){//判断是否全为数字 
					printf("\033[40;31m    您输入的ID不合法请重新输入：\033[0m");
					t=1;
					break;
				}
				i++;
			}
			if(t==1){//如果上面已经出错，则重新输入 
				continue;
			} 
			if(i>10&&t!=1){//之前为出错，判断是否超过十位 
				printf("\033[40;31m    您输入的ID不合法请重新输入：\033[0m");
				continue;
			}
			ret=findid(id);//引用id查找函数,查到返回1，否则0 
			if(ret==1){
				printf("\033[40;31m    对不起此用户ID已存在请重新输入:\033[0m");
				continue;
			}
			//走到这里说明id未出错
			break; 
		}
	printf("    请输入注册的密码：");
		while(1){
			scanf("%s",key);
			//检查key的合法性
			i=0;
			t=0;
			while(key[i]!=0){
				if(!(key[i]<='9'&&key[i]>='0')){//判断是否全为数字 
					printf("\033[40;31m    您输入的密码或身份信息不合法请重新输入：\033[0m");
					t=1;
					break;
				}
				i++;
			}
			if(t==1){//如果上面已经出错，则重新循环 
				continue;
			} 
			if(i>10&&t!=1){//之前为出错，判断是否超过十位 
				printf("\033[40;31m    您输入的密码不合法请重新输入：\033[0m");
				continue;
			}
			//能走到这里，说明密码合法,跳出输入循环 
			break; 
		}
	addid(id,key,2);
	fflush(stdin);
	printf("   恭喜您成功注册\n   按任意键返回！");
	getch();
	return ;
	return;
}
