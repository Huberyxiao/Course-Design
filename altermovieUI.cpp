#include <stdio.h>
#include "struct.h"
#include <conio.h>
#include <windows.h>


void altermovieBLL(int n,int month,int day,int hour,int room);
nodemovie * getfilemovie();
int roomcheck(int room);
//�޸ĵ�Ӱ�ŵ�UI���� 
void altermovieUI(){
	int i=1,n,month,day,room,hour;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
	printf("\033[40;35m                           �޸�ӰƬ�ݳ��ƻ�\n\033[0m");
	printf("                            ȫ���ƻ�\n");
	printf("    _____________________________________________________________\n");
	printf("         ��Ӱ����         ID            ��ӳʱ��             Ӱ��\n"); 
	//���õ�Ӱ�ļ��򿪺���  ֱ�ӷ��ʵ�����,��ӡȫ����Ӱ�ŵ����� 
	nodemovie *head=getfilemovie();
	nodemovie *p=head;
	p=p->next;
	if(p==NULL){
		printf("    ��ǰ���ݳ��ƻ���\n    �����������");
		getch(); 
		return;
	}
	while(p!=NULL){
		printf("   %d%12s%14s           %d��%2d��%2dʱ           %d\n",i,p->name,p->id,p->month,p->day,p->hour,p->room); 
		p=p->next;
		i++;
	}
	printf("    ����������Ҫ�޸ļƻ������:"); 
	while(1){
		if(scanf("%d",&n)!=1){
			printf("    ���������������������룺");
			fflush(stdin);
			continue;
		}
		else if(n>=i||n<=0){
			printf("    ���������������������룺");
			fflush(stdin);
			continue;
		}
		break;
	}
	printf("    ����������Ҫ�޸ĺ���·ݡ�����ʱ���Ӱ�����ո�����:\n");
	printf("       ");
	while(1){
		//�ж��·ݺ�����
			if(scanf("%d",&month)!=1){
				printf("    ���������������������룺");
				fflush(stdin);
				continue;
			}
			if(scanf("%d",&day)!=1){
				printf("    ���������������������룺");
				fflush(stdin);
				continue;
			}
			if(month>12){
				printf("    ���������������������룺");
				fflush(stdin);
				continue;
			}
			if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
				if(day>31){
					printf("    ���������������������룺");
					fflush(stdin);
					continue;
				}
			}
			if(month==4||month==6||month==9||month==11){
				if(day>30){
					printf("    ���������������������룺");
					fflush(stdin);
					continue;
				}
			}
			if(month==2&&day>29){
				printf("    ���������������������룺");
				fflush(stdin);
				continue;
			}
		//�ж�ʱ���Ƿ���ȷ
			if(scanf("%d",&hour)!=1){
				printf("   ���������������������룺");
				fflush(stdin);
				continue;
			}
			else if(hour<0||hour>=24){
				printf("   ���������������������룺");
				fflush(stdin);
				continue;
			}
		//�ж�Ӱ���Ƿ����
			if(scanf("%d",&room)!=1){
				printf("    ���������������������룺");
				fflush(stdin);
				continue;
			}
			else{//�ж�Ӱ���Ƿ���� 
				 if(roomcheck(room)==0){//����0ʱ˵����ǰ�ѿ�ͨӰ����û�����Ӱ�� 
				 	printf("    �����ڴ�Ӱ�������������룺");
					fflush(stdin);
					continue;
				 }
			}
		//�ߵ��˴�˵����������Ϸ�
		break;
	}
	altermovieBLL(n,month,day,hour,room);
	printf("    ��ϲ���ɹ��޸ĵ�%d�żƻ�\n    �����������",n);
	getch(); 
	
	return;
} 
