#include <conio.h>
#include <stdio.h>
#include <windows.h>


int findid(char *id);
void addid(char *id,char *key,int position);
//ע�ắ�� 
void addidUI(){
	char id[15];
	char key[18];
	int ret,i,t;
	system("cls");
	printf("********************************************************************\n");
	printf("**************************��ӭ��������ӰԺ**************************\n\n\n");
	printf("                              �ͻ�ע��\n\n\n");
	printf("\033[40;33m    tips��id����������ܳ���ʮλ\n          id�������Ϊ����\n\033[0m");
	printf("    ������ע����û�ID:");
	//���id�ĺϷ��� 
		while(1){
			scanf("%s",id);
			i=0;
			t=0;
			while(id[i]!=0){
				if(!(id[i]<='9'&&id[i]>='0')){//�ж��Ƿ�ȫΪ���� 
					printf("\033[40;31m    �������ID���Ϸ����������룺\033[0m");
					t=1;
					break;
				}
				i++;
			}
			if(t==1){//��������Ѿ��������������� 
				continue;
			} 
			if(i>10&&t!=1){//֮ǰΪ�����ж��Ƿ񳬹�ʮλ 
				printf("\033[40;31m    �������ID���Ϸ����������룺\033[0m");
				continue;
			}
			ret=findid(id);//����id���Һ���,�鵽����1������0 
			if(ret==1){
				printf("\033[40;31m    �Բ�����û�ID�Ѵ�������������:\033[0m");
				continue;
			}
			//�ߵ�����˵��idδ����
			break; 
		}
	printf("    ������ע������룺");
		while(1){
			scanf("%s",key);
			//���key�ĺϷ���
			i=0;
			t=0;
			while(key[i]!=0){
				if(!(key[i]<='9'&&key[i]>='0')){//�ж��Ƿ�ȫΪ���� 
					printf("\033[40;31m    �����������������Ϣ���Ϸ����������룺\033[0m");
					t=1;
					break;
				}
				i++;
			}
			if(t==1){//��������Ѿ�����������ѭ�� 
				continue;
			} 
			if(i>10&&t!=1){//֮ǰΪ�����ж��Ƿ񳬹�ʮλ 
				printf("\033[40;31m    ����������벻�Ϸ����������룺\033[0m");
				continue;
			}
			//���ߵ����˵������Ϸ�,��������ѭ�� 
			break; 
		}
	addid(id,key,2);
	fflush(stdin);
	printf("   ��ϲ���ɹ�ע��\n   ����������أ�");
	getch();
	return ;
	return;
}
