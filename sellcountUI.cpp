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
//Ʊ���鿴 
void sellcountUI(){
	system("cls");
	printf("********************************************************************\n");
	printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
	printf("\033[40;35m                           ӰԺ�����\n\n\033[0m");
	printf("                           Ʊ���鿴\n\n");
	printf("                           ˳��鿴\n");
	printf("                           ����鿴\n"); 
	printf("                   tips:��������ѡ�񣬻س�ȷ��\n"); 
	printf("                        Esc�˳�\n");
	//printf("258");
	nodeboxoffice *head=sellcountBLL();//��������ļ�ͳ�ƺ������ 
	//���������ݴ򿪣����������� 
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
	//���ˣ�����t����i��Ԫ�أ���Ʊ���������� 
	while(1){
		c=getch();
		if(c==27){//Esc�˳� 
			break;
		}
		if(c==72){//���� 
			if(i>1){
				i--;
				system("cls");
				if(i==1){
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                           ӰԺ�����\n\n\033[0m");
					printf("                           Ʊ���鿴\n\n");
					printf("\033[40;32m                           ˳��鿴\n\033[0m");
					printf("                           ����鿴\n"); 
					printf("                   tips:��������ѡ�񣬻س�ȷ��\n"); 
					printf("                        Esc�˳�\n");
				} 
			} 
		}
		if(c==80){//���� 
			if(i<2){
				i++;
				system("cls");
				if(i==1){
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                           ӰԺ�����\n\n\033[0m");
					printf("                           Ʊ���鿴\n\n");
					printf("\033[40;32m                           ˳��鿴\n\033[0m");
					printf("                           ����鿴\n"); 
					printf("                   tips:��������ѡ�񣬻س�ȷ��\n"); 
					printf("                        Esc�˳�\n");
				}
				if(i==2){
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                           ӰԺ�����\n\n\033[0m");
					printf("                           Ʊ���鿴\n\n");
					printf("                           ˳��鿴\n");
					printf("\033[40;32m                           ����鿴\n\033[0m"); 
					printf("                   tips:��������ѡ�񣬻س�ȷ��\n"); 
					printf("                        Esc�˳�\n");
				} 
			} 
		}
		if(c=='\r'&&i==1){//˳��鿴 
			system("cls");
			printf("********************************************************************\n");
			printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
			printf("\033[40;35m                           ӰԺ�����\n\n\033[0m");
			printf("                           Ʊ���鿴\n\n");
			printf("\033[40;32m                           ˳��鿴\n\033[0m");
				printf("         __________________________________\n");
				printf("         ��Ӱ����       ��ӰID         Ʊ��(Ԫ)\n");
			for(x=j-1;x>=0;x--){
				printf("%16s%14s          %d(Ԫ)\n",t[x].name,t[x].id,t[x].boxoffice*50); 
			}
			printf("         �����������");
			getch();
			system("cls");
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                           ӰԺ�����\n\n\033[0m");
					printf("                           Ʊ���鿴\n\n");
					printf("\033[40;32m                           ˳��鿴\n\033[0m");
					printf("                           ����鿴\n"); 
					printf("                   tips:��������ѡ�񣬻س�ȷ��\n"); 
					printf("                        Esc�˳�\n");
			 
		}
		if(c=='\r'&&i==2){//����鿴
			system("cls");
			printf("********************************************************************\n");
			printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
			printf("\033[40;35m                           ӰԺ�����\n\n\033[0m");
			printf("                           Ʊ���鿴\n\n");
			printf("\033[40;32m                           ����鿴\n\033[0m");
				printf("         __________________________________\n");
				printf("         ��Ӱ����       ��ӰID         Ʊ��(Ԫ)\n");
			for(x=0;x<j;x++){
				printf("%16s%14s          %d(Ԫ)\n",t[x].name,t[x].id,t[x].boxoffice*50); 
			}
			printf("         �����������");
			getch();
			system("cls");
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                           ӰԺ�����\n\n\033[0m");
					printf("                           Ʊ���鿴\n\n");
					printf("                           ˳��鿴\n");
					printf("\033[40;32m                           ����鿴\n\033[0m"); 
					printf("                   tips:��������ѡ�񣬻س�ȷ��\n"); 
					printf("                        Esc�˳�\n");
		} 
	}
	while(p!=NULL){
		head=head->next;
		free(p);
		p=head;
	}
	return;
	
}
