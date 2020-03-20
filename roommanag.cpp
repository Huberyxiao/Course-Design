#include <stdio.h>
#include <windows.h>
#include <conio.h>


void addroom(int room,int people);
int roomcheck(int room);
void deleteroom(int room);
//影厅管理
void roommanage(){
	int i=0,room,people;
	char c;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************欢迎光临银河影院**************************\n\n\n");
	printf("\033[40;35m                             影厅管理\n\n\n\033[0m");
	printf("                             增加影厅\n");
	printf("                             删除影厅\n"); 
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
					printf("\033[40;35m                             影厅管理\n\n\n\033[0m");
					printf("\033[40;32m                             增加影厅\n\033[0m");
					printf("                             删除影厅\n"); 
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
					printf("\033[40;35m                             影厅管理\n\n\n\033[0m");
					printf("\033[40;32m                             增加影厅\n\033[0m");
					printf("                             删除影厅\n"); 
					printf("                      tips:↑↓控制选择，回车确认\n"); 
					printf("                           Esc退出\n");
				}
				if(i==2){
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("\033[40;35m                             影厅管理\n\n\n\033[0m");
					printf("                             增加影厅\n");
					printf("\033[40;32m                             删除影厅\n\033[0m"); 
					printf("                      tips:↑↓控制选择，回车确认\n"); 
					printf("                           Esc退出\n");
				} 
			} 
		}
		if(c=='\r'&&i==1){//增加影厅 
			printf("      请输入增加的影厅号和该影厅容纳量："); 
			while(1){
				if(scanf("%d",&room)!=1){
					fflush(stdin);
					printf("\033[40;31m    您输入的影厅号不合法请重新输入：\033[0m");
					continue;
				}
				else if(roomcheck(room)==1){
					fflush(stdin);
					printf("\033[40;31m    您输入的影厅号已存在请重新输入：\033[0m");
					continue;
				}
				if(scanf("%d",&people)!=1){
					fflush(stdin);
					printf("\033[40;31m    您输入的影厅容纳量不合法请重新输入：\033[0m");
					continue;
				}
				else if(people<=0){
					fflush(stdin);
					printf("\033[40;31m    您输入的影厅容纳量为0请重新输入：\033[0m");
					continue;
				} 
				break;
			} 
			addroom(room,people);
			printf("      恭喜您成功增加影厅！\n"); 
			fflush(stdin);
			printf("      按任意键返回\n");
			getch();
			return;
		} 
		if(c=='\r'&&i==2){//删除影厅 
			printf("      请输入删除的影厅号："); 
			while(1){
				if(scanf("%d",&room)!=1){
					fflush(stdin);
					printf("\033[40;31m    您输入的影厅号不合法请重新输入：\033[0m");
					continue;
				}
				else if(roomcheck(room)==0){
					fflush(stdin);
					printf("\033[40;31m    您输入的影厅号不存在请重新输入：\033[0m");
					continue;
				}
				break;
			}
			//调用删除影厅函数
			deleteroom(room);
			printf("      恭喜您成功删除影厅！\n");
			fflush(stdin);
			printf("      按任意键返回\n");
			getch();
			return; 
		}
	}
	return;
} 
