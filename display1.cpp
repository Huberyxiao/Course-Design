#include "struct.h"
#include "string.h" 
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int idcheck(node userid); 



//��һ���潻������ �����������Ϣ(ϵͳ����Ա����1���ͻ�����2����ƱԱ����3��ӰԺ����Ա����4)
node display1(){
	system("cls"); 
	int i=0,k=0,t=0,ret=0,j;
	char c;
	node userid;
	memset(userid.id,0,sizeof(userid.id));
	memset(userid.key,0,sizeof(userid.key));
	printf("********************************************************************\n");
	printf("**************************��ӭ��������ӰԺ**************************\n\n\n\n");
	printf("                           ID:\n");
	printf("                           key:\n");
	printf("                           ��¼\n\n\n\n");
	printf("            tips:��С���̵ġ��͡����ƶ����,�س�ȷ�ϣ�\n"); 
	while(1){//�ƶ�����ѭ��
		c=getch();
		if(c==27){
			userid.position=0;
			return userid;
		}
		if(c==72){//�����ƶ� 
			if(i>1){
				i--;
				system("cls"); 
				if(i==1){
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n\n");
					
					printf("\033[40;34m                           ID:\033[0m");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					printf("                           key:");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					printf("                           ��¼\n\n\n\n");
					printf("            tips:��С���̵ġ��͡����ƶ����,�س�ȷ�ϣ�\n");
				}
				if(i==2){
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n\n");
					printf("                           ID:");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					
					printf("\033[40;34m                           key:\033[0m");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					printf("                           ��¼\n\n\n\n"); 
					printf("            tips:��С���̵ġ��͡����ƶ����,�س�ȷ�ϣ�\n");
				}
				if(i==3){
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n\n");
					printf("                           ID:");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					printf("                           key:");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					printf("\033[40;34m                           ��¼\033[0m\n\n\n\n");
					
					printf("            tips:��С���̵ġ��͡����ƶ����,�س�ȷ�ϣ�\n");
				}
			}
		}
		else if(c==80){//�����ƶ� 
			if(i<3){
				i++;
				system("cls"); 
				if(i==1){
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n\n");
					
					printf("\033[40;34m                           ID:\033[0m");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					printf("                           key:");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					printf("                           ��¼\n\n\n\n");
					printf("            tips:��С���̵ġ��͡����ƶ����,�س�ȷ�ϣ�\n");
				}
				if(i==2){
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n\n");
					printf("                           ID:");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					
					printf("\033[40;34m                           key:\033[0m");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					printf("                           ��¼\n\n\n\n"); 
					printf("            tips:��С���̵ġ��͡����ƶ����,�س�ȷ�ϣ�\n");
				}
				if(i==3){
					
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n\n");
					printf("                           ID:");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					printf("                           key:");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					printf("\033[40;34m                           ��¼\033[0m\n\n\n\n"); 
					
					printf("            tips:��С���̵ġ��͡����ƶ����,�س�ȷ�ϣ�\n");
				}
			}
		}
		else if(c<='9'&&c>='0'&&i==1&&userid.id[9]==0){//����id 
				k=0;
				while(userid.id[k]!=0){
					k++;
				}
			while(c!='\r'&&k<10){
				
				userid.id[k]=c;
					system("cls");
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n\n");
					printf("\033[40;34m                           ID:\033[0m");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					printf("                           key:");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					
					
					printf("                           ��¼\n\n\n\n"); 
					printf("            tips:��С���̵ġ��͡����ƶ����,�س�ȷ�ϣ�\n");
				k++;
				c=getch();
				if(!(c>='0'&&c<='9')){
					break;
				}
				 
			}
			userid.id[k]=0;
			k=0;
		}
		else if(c<='9'&&c>='0'&&i==2&&userid.key[9]==0){//����key 
				k=0;
				while(userid.key[k]!=0){
					k++;
				}
			while(c!='\r'&&k<10){
			
				userid.key[k]=c;
					system("cls");
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n\n");
					printf("                           ID:");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					printf("\033[40;34m                           key:\033[0m");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					
					printf("                           ��¼\n\n\n\n"); 
					printf("            tips:��С���̵ġ��͡����ƶ����,�س�ȷ�ϣ�\n");
				k++;
				c=getch();
				if(!(c>='0'&&c<='9')){
					break;
				}
			}
			userid.key[k]=0;
			k=0;
		}
		else if(c=='\b'&&i==1){//id�˸� 
			t=10;
			while(t>=0){
				if(userid.id[t]!=0){
					userid.id[t]=0;
					break;
				}
				t--;
			}
			//����ˢ��
					system("cls");
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n\n");
					printf("\033[40;34m                           ID:\033[0m");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					printf("                           key:");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					
					
					printf("                           ��¼\n\n\n\n");
					printf("            tips:��С���̵ġ��͡����ƶ����,�س�ȷ�ϣ�\n");
		}
		else if(c=='\b'&&i==2){//key�˸� 
			t=10;
			while(t>=0){
				if(userid.key[t]!=0){
					userid.key[t]=0;
					break;
				}
				t--;
			}
			//����ˢ��
					system("cls");
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n\n");
					printf("                           ID:");
							t=0;
							while(userid.id[t]!=0){
								printf("%c",userid.id[t]);
								t++;
							} 
							printf("\n");
					printf("\033[40;34m                           key:\033[0m");
							t=0;
							while(userid.key[t]!=0){
								printf("*");
								t++;
							} 
							printf("\n");
					
					printf("                           ��¼\n\n\n\n"); 
					printf("            tips:��С���̵ġ��͡����ƶ����,�س�ȷ�ϣ�\n"); 
		}
		else if(c=='\r'&&i==3){//ѡ���¼�������ݴ��������֤���� 
			ret=idcheck(userid);
			userid.position=ret;
			if(ret){//���ͨ����ϵͳ����Ա����1���ͻ�����2����ƱԱ����3��ӰԺ����Ա����4 
				return userid;
			}
			else {//��ݲ�ͨ����ˢ����Ļ 
				memset(userid.id,0,sizeof(userid.id));
				memset(userid.key,0,sizeof(userid.key));
						system("cls");
					printf("********************************************************************\n");
					printf("**************************��ӭ��������ӰԺ**************************\n\n\n\n");
					printf("                           ID:\n");
					printf("                           key:\n");
					printf("                           ��¼\n\n\n\n");
					printf("            tips:��С���̵ġ��͡����ƶ����,�س�ȷ�ϣ�\n"); 
					printf("\033[40;31m            ����������˺Ŵ��󣡰�������������\033[0m"); 
			}
		}
	}
	 
 } 
