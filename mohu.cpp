#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int mohu(char* key,char* str)
{
    typedef struct nodde
    {
        char son[30];
    }nodde;
    int i,j,k=0,l=0,m=0;
    //f=1Ϊ����ɸѡ����
    int f=0;
    //N1Ϊstr�ĳ��� N2Ϊstr�����Ӵ��ĸ���
    int N1=0,N2=0;
    N1=strlen(str);
    /*���������Ӵ��ĸ���*/
    for(i=1;i<=N1;i++){
    	N2+=i;
	}
    /*���������Ӵ��ĸ���*/
    //i�������ַ����ĳ���
    //j���Ƹ�ֵ
    //k�����µ����Խṹb���±�
    //l�����������������ԭ�����е�λ��
    //m���Ƽ���������ֵ��str���±�
    nodde *b=(nodde *)malloc(sizeof(nodde)*N2);
    for(i=1;i<=N1;i++){
        l=0;
        /*whileѭ����Ϊ��һ�����ַ������鸳ֵ*/
        while(1){
            m=l;
            for(j=0;j<i;j++){
                b[k].son[j]=str[m];
                m++;
            }
            l++;
            k++;
            if(m==N1){
            	break;
			}
               
        }
    }
    //�����ȶ�
    for(i=0;i<N2;i++)
        if(strcmp(key,b[i].son)==0){
            f=1;
            break;
        }
    free(b);
    return f;
}
