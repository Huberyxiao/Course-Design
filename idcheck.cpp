#include "struct.h"
#include <stdio.h>
#include <string.h> 

node*  getfileid(); 
//�����֤���������������������ݣ����գ����ã����ݷ��ʲ㺯�����ص������Ϣ���ݣ����к�ʵɸѡ 
int idcheck(node userid)//���������������� 
{
	node* head=getfileid(); //���û������ļ���ȡ���������ݵ��׵�ַ
	node* p=(head); 
	while(p!=NULL){
		if(strcmp(userid.id,p->id)==0&&strcmp(userid.key,p->key)==0){
			return p->position;//ϵͳ����Ա����1���ͻ�����2����ƱԱ����3��ӰԺ����Ա����4 
		}
		p=p->next;
	}
	return 0;//����0����ѯ���� 
}
