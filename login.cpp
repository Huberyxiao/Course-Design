#include "struct.h" 



node display1();
void administrator(); 
void client(char *id);
void sellman();
void cinemamanage(char *id); 
void login(){
	int a=0;
	node userid;
	userid=display1();//第一界面函数
	a=userid.position;
	if(a==0){
		return;
	}
	//系统管理端
	if(a==1){
		//系统管理员界面函数
		administrator(); 
	}
	//客户端 
	else if(a==2){
		//客户端界面函数 
		client(userid.id);
	} 
	//售票端
	else if(a==3){
		sellman();
	} 
	//影院管理端
	else if(a==4){
		//影院管理函数 
		cinemamanage(userid.id);
	} 
	return ;
}
