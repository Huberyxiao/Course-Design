#include "struct.h"
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


int cmp1(const  void *a ,const void  *b)  
{  
	return ((nodeboxoffice *)a)->boxoffice-((nodeboxoffice *)b)->boxoffice;  
}  

nodeboxoffice *sellcountBLL();
//票房查看 
void sellcountUI(){
	system("cls");
	printf("********************************************************************\n");
	printf("**************************欢迎光临银河影院**************************\n\n\n");
	printf("\033[40;35m                           影院管理端\n\n\033[0m");
	printf("                           票房查看\n\n");
	printf("                           顺序查看\n");
	printf("                           逆序查看\n"); 
	printf("                   tips:↑↓控制选择，回车确认\n"); 
	printf("                        Esc退出\n");
	//printf("258");
	nodeboxoffice *head=sellcountBLL();//获得销售文件统计后的链表 
	//将链表数据打开，存在数组中 
	nodeboxoffice *p=head;
	p=p->next;
	nodeboxoffice t[1000];
	int i=0,j=0,x=0;
	char c;
	
	while(p!=NULL){
		strcpy(t[j].name,p->name);
		strcpy(t[j].id,p->id);
		t[j].boxoffice=p->boxoffice;
		j++;
		p=p->next;
	}
	qsort(t,j,sizeof(t[0]),cmp1); 
	//至此，数组t中有i个元素，且票房数据升序 
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
					printf("\033[40;35m                           影院管理端\n\n\033[0m");
					printf("                           票房查看\n\n");
					printf("\033[40;32m                           顺序查看\n\033[0m");
					printf("                           逆序查看\n"); 
					printf("                   tips:↑↓控制选择，回车确认\n"); 
					printf("                        Esc退出\n");
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
					printf("\033[40;35m                           影院管理端\n\n\033[0m");
					printf("                           票房查看\n\n");
					printf("\033[40;32m                           顺序查看\n\033[0m");
					printf("                           逆序查看\n"); 
					printf("                   tips:↑↓控制选择，回车确认\n"); 
					printf("                        Esc退出\n");
				}
				if(i==2){
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("\033[40;35m                           影院管理端\n\n\033[0m");
					printf("                           票房查看\n\n");
					printf("                           顺序查看\n");
					printf("\033[40;32m                           逆序查看\n\033[0m"); 
					printf("                   tips:↑↓控制选择，回车确认\n"); 
					printf("                        Esc退出\n");
				} 
			} 
		}
		if(c=='\r'&&i==1){//顺序查看 
			system("cls");
			printf("********************************************************************\n");
			printf("**************************欢迎光临银河影院**************************\n\n\n");
			printf("\033[40;35m                           影院管理端\n\n\033[0m");
			printf("                           票房查看\n\n");
			printf("\033[40;32m                           顺序查看\n\033[0m");
				printf("         __________________________________\n");
				printf("         电影名称       电影ID         票房(元)\n");
			for(x=j-1;x>=0;x--){
				printf("%16s%14s          %d(元)\n",t[x].name,t[x].id,t[x].boxoffice*50); 
			}
			printf("         按任意键返回");
			getch();
			system("cls");
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("\033[40;35m                           影院管理端\n\n\033[0m");
					printf("                           票房查看\n\n");
					printf("\033[40;32m                           顺序查看\n\033[0m");
					printf("                           逆序查看\n"); 
					printf("                   tips:↑↓控制选择，回车确认\n"); 
					printf("                        Esc退出\n");
			 
		}
		if(c=='\r'&&i==2){//逆序查看
			system("cls");
			printf("********************************************************************\n");
			printf("**************************欢迎光临银河影院**************************\n\n\n");
			printf("\033[40;35m                           影院管理端\n\n\033[0m");
			printf("                           票房查看\n\n");
			printf("\033[40;32m                           逆序查看\n\033[0m");
				printf("         __________________________________\n");
				printf("         电影名称       电影ID         票房(元)\n");
			for(x=0;x<j;x++){
				printf("%16s%14s          %d(元)\n",t[x].name,t[x].id,t[x].boxoffice*50); 
			}
			printf("         按任意键返回");
			getch();
			system("cls");
					printf("********************************************************************\n");
					printf("**************************欢迎光临银河影院**************************\n\n\n");
					printf("\033[40;35m                           影院管理端\n\n\033[0m");
					printf("                           票房查看\n\n");
					printf("                           顺序查看\n");
					printf("\033[40;32m                           逆序查看\n\033[0m"); 
					printf("                   tips:↑↓控制选择，回车确认\n"); 
					printf("                        Esc退出\n");
		} 
	}
	while(p!=NULL){
		head=head->next;
		free(p);
		p=head;
	}
	return;
	
}
