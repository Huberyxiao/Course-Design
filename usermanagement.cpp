#include "struct.h" 
#include <stdio.h>
#include <windows.h> 
#include <string.h>
#include <conio.h>

node *getfileid();
int  findid(char *p);
void addid(char id[15],char key[18],int position);
void deleteid(char id[15]);
void alterid(char id[15],char key[18],int position);
//用户管理函数 
void usermanagement()
{
	char id[15];
	char key[18];
	int  position;
	int n,m,ret=0,t=0,i;
	//接受来自文件的全部数据
	node *head=getfileid();
	//打印全部用户信息（id，key，position） 
	node *p=(head);
	p=p->next;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************欢迎光临银河影院**************************\n\n\n");
	printf("\033[40;35m                           系统管理端\n\n\033[0m");
	printf("    _____________________________________________________________\n");
	printf("    用户ID    用户密码      用户身份(系统管理/售票/影院管理/客户)\n"); 
	if(p==NULL){
		printf("    当前无用户ID！\n    按任意键返回");
		getch(); 
		return;
	}
	while(p!=NULL){
		printf("%11s%11s          %d\n",p->id,p->key,p->position);
		p=p->next;
	}
	printf("    _____________________________________________________________\n");
	printf("\033[40;33m    tips：增添--按1键\n          删除--按2键\n          修改--按3键\n          退出--按0键\n\033[0m");
	//提供选型
	printf("    您可以进行添加/删除/修改用户的个人信息\n"); 
	while(1){
		printf("    ======================\n");
		printf("    请您选择需要的操作：");
		if(scanf("%d",&n)!=1){
			printf("\033[40;31m    您确定有这个选项吗？(请重新输入)\n\033[0m");
			fflush(stdin);
			continue;
		}
		if(n<0||n>3){
			printf("\033[40;31m    您确定有这个选项吗？(请重新输入)\n\033[0m");
			continue;	
		} 
		printf("    您确定吗？（1---确定、其他---重新选择）：");
		if(scanf("%d",&m)!=1){
			fflush(stdin);
			continue;
		}
		if(m==1){
			break;
		}
		
	}
	if(n==0){
		return;
	}
	
	//清屏
			system("cls");
			printf("********************************************************************\n");
			printf("**************************欢迎光临银河影院**************************\n\n\n");
			printf("\033[40;35m                           系统管理端\n\n\033[0m");
			printf("    _____________________________________________________________\n");
			printf("    用户ID    用户密码      用户身份(系统管理/售票/影院管理/客户)\n"); 
			p=(head);
			p=p->next;
			
			while(p!=NULL){
				printf("%11s%11s          %d\n",p->id,p->key,p->position);
				p=p->next;
			}
			printf("    _____________________________________________________________\n"); 
			
			if(n==1){//增添
				printf("    您选择了增加新用户\n");
			}
			if(n==2){//删除 
				printf("    您选择了删除用户\n");
			} 
			if(n==3){//修改 
				printf("    您选择了修改用户\n");
			} 
			
			printf("\033[40;33m    tips：id和密码均不能超过十位\n          身份信息只能输入数字1(系统管理)，2(客户)，3(售票)，4(影院管理)\n          id和密码仅为数字\n\033[0m");
	while(1){
		printf("    请选择需要添加/删除/修改的用户id:");
			//检查id的合法性 
			while(1){
				scanf("%s",id);
				i=0;
				t=0;
				while(id[i]!=0){
					if(!(id[i]<='9'&&id[i]>='0')){//判断是否全为数字 
						printf("\033[40;31m    您输入的id不合法请重新输入：\033[0m");
						t=1;
						break;
					}
					i++;
				}
				if(t==1){//如果上面已经出错，则重新输入 
					continue;
				} 
				if(i>10&&t!=1){//之前为出错，判断是否超过十位 
					printf("\033[40;31m    您输入的id不合法请重新输入：\033[0m");
					continue;
				}
				//走到这里说明id未出错
				break; 
			}
		ret=findid(id);//引用id查找函数,查到返回1，否则0 
		if(n==1){
			if(ret==1){
				printf("\033[40;31m    对不起此用户已存在请重新输入！\n\033[0m");
				continue;
			}
			else break;
		}
		else {
			if(ret==1){ 
				break;
			}
			else printf("\033[40;31m    未找到该用户请重新输入!\n\033[0m");
		}	
	}
	if(n==1){//增添
		printf("    请输入需要添加用户的密码和身份信息(中间用空格间隔)：");
		while(1){
			scanf("%s",key);
			//检查key和position的合法性
			if(scanf("%d",&position)!=1){//检查身份的合法性 ，是否为数字 
				fflush(stdin);
				printf("\033[40;31m    您输入的密码或身份信息不合法请重新输入：\033[0m");
				continue;
			}
			if(!(position<=4&&position>=1)){//输入的身份数字不合法 
				printf("\033[40;31m    您输入的密码或身份信息不合法请重新输入：\033[0m");
				continue;
			} 
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
				printf("\033[40;31m    您输入的密码或身份信息不合法请重新输入：\033[0m");
				continue;
			}
			//能走到这里，说明都合法（位数，内容） ,跳出输入循环 
			break; 
		}
		addid(id,key,position);//调用用户id增加函数
		printf("    恭喜您！成功注册id为%s的用户！\n",id);
	}
	if(n==2){//删除 
		deleteid(id);//调用用户id删除函数 
		printf("    恭喜您！成功删除id为%s的用户！\n",id); 
	}
	if(n==3){//修改 
		
		printf("\033[40;33m    tips：密码不能超过十位且全为数字\n          身份信息只能输入数字1(系统管理)，2(客户)，3(售票)，4(影院管理)\n\n\033[0m");
		printf("    请输入修改后用户的密码和身份信息(中间用空格间隔)：");
			
				//判断key的合法性
				 	while(1){
					scanf("%s",key);
					//检查key和position的合法性
					if(scanf("%d",&position)!=1){//检查身份的合法性 ，是否为数字 
						fflush(stdin);
						printf("\033[40;31m    您输入的密码或身份信息不合法请重新输入：\033[0m");
						continue;
					}
					if(!(position<=4&&position>=1)){//输入的身份数字不合法 
						printf("\033[40;31m    您输入的密码或身份信息不合法请重新输入：\033[0m");
						continue;
					} 
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
						printf("\033[40;31m    您输入的密码或身份信息不合法请重新输入：\033[0m");
						continue;
					}
					//能走到这里，说明都合法（位数，内容） ,跳出输入循环 
					break; 
				}
		alterid(id,key,position);//调用用户id修改函数
		printf("    恭喜您！成功修改id为%s的用户！\n",id);
	} 
	fflush(stdin);
	printf("    按任意键返回\n");
	getch();
	return;
 } 
