#include <stdio.h>
#include <conio.h>
#include <windows.h>

void usermanagement();
//系统管理员操作界面函数
void administrator(){
	char c;
	while(1){
		system("cls");
		printf("********************************************************************\n");
		printf("**************************欢迎光临银河影院**************************\n\n\n");
		printf("\033[40;35m                           系统管理端\n\n\033[0m");
		printf("                           用户ID管理\n\n\n\n\n");
		printf("               tips:按回车确认并进入用户ID管理！\n");
		printf("                    按Esc键结束程序!\n"); 
		c=getch();
		if(c==27){//Esc键，终止整个程序 
			return;
		}
		if(c=='\r'){//进入用户管理界面 （调用用户管理函数UI） 
			usermanagement();
			system("cls");
				printf("********************************************************************\n");
				printf("**************************欢迎光临银河影院**************************\n\n\n");
				printf("\033[40;35m                           系统管理端\n\n\033[0m");
				printf("                           用户ID管理\n\n\n\n\n");
				printf("               tips:按回车确认并进入用户ID管理！\n");
				printf("                    按Esc键结束程序!\n"); 
		} 	
	}
	return;
}
