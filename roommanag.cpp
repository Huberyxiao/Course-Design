#include <stdio.h>
#include <windows.h>
#include <conio.h>


void addroom(int room,int people);
int roomcheck(int room);
void deleteroom(int room);
//Ӱ������
void roommanage(){
	int i=0,room,people;
	char c;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
	printf("\033[40;35m                             Ӱ������\n\n\n\033[0m");
	printf("                             ����Ӱ��\n");
	printf("                             ɾ��Ӱ��\n"); 
	printf("                      tips:��������ѡ�񣬻س�ȷ��\n"); 
	printf("                           Esc�˳�\n");
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
					printf("\033[40;35m                             Ӱ������\n\n\n\033[0m");
					printf("\033[40;32m                             ����Ӱ��\n\033[0m");
					printf("                             ɾ��Ӱ��\n"); 
					printf("                      tips:��������ѡ�񣬻س�ȷ��\n"); 
					printf("                           Esc�˳�\n");
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
					printf("\033[40;35m                             Ӱ������\n\n\n\033[0m");
					printf("\033[40;32m                             ����Ӱ��\n\033[0m");
					printf("                             ɾ��Ӱ��\n"); 
					printf("                      tips:��������ѡ�񣬻س�ȷ��\n"); 
					printf("                           Esc�˳�\n");
				}
				if(i==2){
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
					printf("\033[40;35m                             Ӱ������\n\n\n\033[0m");
					printf("                             ����Ӱ��\n");
					printf("\033[40;32m                             ɾ��Ӱ��\n\033[0m"); 
					printf("                      tips:��������ѡ�񣬻س�ȷ��\n"); 
					printf("                           Esc�˳�\n");
				} 
			} 
		}
		if(c=='\r'&&i==1){//����Ӱ�� 
			printf("      ���������ӵ�Ӱ���ź͸�Ӱ����������"); 
			while(1){
				if(scanf("%d",&room)!=1){
					fflush(stdin);
					printf("\033[40;31m    �������Ӱ���Ų��Ϸ����������룺\033[0m");
					continue;
				}
				else if(roomcheck(room)==1){
					fflush(stdin);
					printf("\033[40;31m    �������Ӱ�����Ѵ������������룺\033[0m");
					continue;
				}
				if(scanf("%d",&people)!=1){
					fflush(stdin);
					printf("\033[40;31m    �������Ӱ�����������Ϸ����������룺\033[0m");
					continue;
				}
				else if(people<=0){
					fflush(stdin);
					printf("\033[40;31m    �������Ӱ��������Ϊ0���������룺\033[0m");
					continue;
				} 
				break;
			} 
			addroom(room,people);
			printf("      ��ϲ���ɹ�����Ӱ����\n"); 
			fflush(stdin);
			printf("      �����������\n");
			getch();
			return;
		} 
		if(c=='\r'&&i==2){//ɾ��Ӱ�� 
			printf("      ������ɾ����Ӱ���ţ�"); 
			while(1){
				if(scanf("%d",&room)!=1){
					fflush(stdin);
					printf("\033[40;31m    �������Ӱ���Ų��Ϸ����������룺\033[0m");
					continue;
				}
				else if(roomcheck(room)==0){
					fflush(stdin);
					printf("\033[40;31m    �������Ӱ���Ų��������������룺\033[0m");
					continue;
				}
				break;
			}
			//����ɾ��Ӱ������
			deleteroom(room);
			printf("      ��ϲ���ɹ�ɾ��Ӱ����\n");
			fflush(stdin);
			printf("      �����������\n");
			getch();
			return; 
		}
	}
	return;
} 
