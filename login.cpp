#include "struct.h" 



node display1();
void administrator(); 
void client(char *id);
void sellman();
void cinemamanage(char *id); 
void login(){
	int a=0;
	node userid;
	userid=display1();//��һ���溯��
	a=userid.position;
	if(a==0){
		return;
	}
	//ϵͳ�����
	if(a==1){
		//ϵͳ����Ա���溯��
		administrator(); 
	}
	//�ͻ��� 
	else if(a==2){
		//�ͻ��˽��溯�� 
		client(userid.id);
	} 
	//��Ʊ��
	else if(a==3){
		sellman();
	} 
	//ӰԺ�����
	else if(a==4){
		//ӰԺ������ 
		cinemamanage(userid.id);
	} 
	return ;
}
