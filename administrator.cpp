#include <stdio.h>
#include <conio.h>
#include <windows.h>

void usermanagement();
//ϵͳ����Ա�������溯��
void administrator(){
	char c;
	while(1){
		system("cls");
		printf("********************************************************************\n");
		printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
		printf("\033[40;35m                           ϵͳ�����\n\n\033[0m");
		printf("                           �û�ID����\n\n\n\n\n");
		printf("               tips:���س�ȷ�ϲ������û�ID����\n");
		printf("                    ��Esc����������!\n"); 
		c=getch();
		if(c==27){//Esc������ֹ�������� 
			return;
		}
		if(c=='\r'){//�����û�������� �������û�������UI�� 
			usermanagement();
			system("cls");
				printf("********************************************************************\n");
				printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
				printf("\033[40;35m                           ϵͳ�����\n\n\033[0m");
				printf("                           �û�ID����\n\n\n\n\n");
				printf("               tips:���س�ȷ�ϲ������û�ID����\n");
				printf("                    ��Esc����������!\n"); 
		} 	
	}
	return;
}
