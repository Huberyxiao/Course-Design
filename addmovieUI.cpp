#include <stdio.h> 
#include <windows.h>
#include "struct.h"
#include <string.h>
#include <conio.h>


int roomcheck(int room);
int moviecheck(char name[],char id[]);
void addmovieBLL(char name[],char id[],int month,int day,int hour,int room); 
int  removiecheck(char name[],char id[],int month,int day,int hour,int room); 
//���ӵ�Ӱ�ŵ� 
void addmovieUI(){
	int ret=0,t;
	char id[100];
	nodemovie movie;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
	printf("\033[40;35m                           ����ӰƬ�ݳ��ƻ�\n\n\033[0m");
	printf("                     Tips:����ID��������λ������\n");
	printf("                     	  �����·ݺ����ڱ������ʵ��(����ǰ׺0)\n");
	printf("   ��������ӵ�ӰƬ����ID����ӳ�¡���ӳ�ա���ӳʱ�䡢��ӳӰ��(�м��ÿո���):\n");
	printf("   ");
	while(1){
		
		//�ж�id�Ƿ��������
			scanf("%s %s",movie.name,movie.id);
			strcpy(id,movie.id);
			if(strlen(id)!=6){
				printf("   ���������������������룺");
				fflush(stdin);
				continue;
			}
			t=6;
			while(t--){
				if(!(id[t]>='0'&&id[t]<='9')){
					printf("   ���������������������룺");
					t=6;
					break;
				}
			}
			if(t==6){
				fflush(stdin);
				continue;
			}
			//printf("lalaal"); 
			//�ж�id�������Ƿ�ƥ��
			if(moviecheck(movie.name,movie.id)==0){//����0ʱ��˵������id�������ƺ�ԭ�е�Ӱ���Ʋ���ͬ 
				printf("   ���������Ӱ����ID���Ѵ��ڵĲ�ƥ�䣬���������룺\n");
				printf("   "); 
				fflush(stdin);
				continue;
			}//printf("12345"); 
		//�ж��·ݺ�����
			if(scanf("%d",&movie.month)!=1){
				printf("   ���������������������룺");
				fflush(stdin);
				continue;
			}
			if(scanf("%d",&movie.day)!=1){
				printf("   ���������������������룺");
				fflush(stdin);
				continue;
			}
			if(movie.month>12){
				printf("   ���������������������룺");
				fflush(stdin);
				continue;
			}
			if(movie.month==1||movie.month==3||movie.month==5||movie.month==7||movie.month==8||movie.month==10||movie.month==12){
				if(movie.day>31){
					printf("   ���������������������룺");
					fflush(stdin);
					continue;
				}
			}
			if(movie.month==4||movie.month==6||movie.month==9||movie.month==11){
				if(movie.day>30){
					printf("   ���������������������룺");
					fflush(stdin);
					continue;
				}
			}
			if(movie.month==2&&movie.day>29){
				printf("   ���������������������룺");
				fflush(stdin);
				continue;
			}
		//�ж�ʱ���Ƿ���ȷ
			if(scanf("%d",&movie.hour)!=1){
				printf("   ���������������������룺");
				fflush(stdin);
				continue;
			}
			else if(movie.hour<0||movie.hour>=24){
				printf("   ���������������������룺");
				fflush(stdin);
				continue;
			}
		//�ж�Ӱ���Ƿ����
			if(scanf("%d",&movie.room)!=1){
				printf("   ���������������������룺");
				fflush(stdin);
				continue;
			}
			else{//�ж�Ӱ���Ƿ���� 
				 if(roomcheck(movie.room)==0){//����0ʱ˵����ǰ�ѿ�ͨӰ����û�����Ӱ�� 
				 	printf("   �����ڴ�Ӱ�������������룺");
					fflush(stdin);
					continue;
				 }
			}
		//����Ƿ��ظ�
			if(removiecheck(movie.name,movie.id,movie.month,movie.day,movie.hour,movie.room)==1){
				printf("   ��ǰʱ���ݳ��ƻ��Ѵ��ڣ����������룺");
				fflush(stdin);
				continue;
			} 
		//�ߵ��˴�˵����������Ϸ�
		 break;
	}
	//����ӰƬ��Ӻ���
	addmovieBLL(movie.name,movie.id,movie.month,movie.day,movie.hour,movie.room); 
	fflush(stdin);
	printf("   ��ϲ���ɹ��������ݳ��ƻ�\n   ����������أ�");
	getch();
	return ;
}
