//���ֽṹ�嶨���ļ� 
typedef struct Node{//����һ����ʱ����û������id��key�ṹ�� 
	char id[15];
	char key[18];
	int position;
	struct Node * next;
}node;

typedef struct Node1{//����һ����ʱ���ӰƬ��Ϣ�Ľṹ�� 
	char name[30];//��Ӱ�� 
	char id[10];//��Ӱid 
	int month;//��ӳ�·� 
	int day;//��ӳ����
	int room;//��ӳӰ�� 
	int hour;//��ӳʱ�� 
	struct Node1 * next;
}nodemovie;
typedef struct Node2{//����һ����ʱ���Ӱ����Ϣ�Ľṹ�� 
	int room;//Ӱ���� 
	int people;//������ 
	struct Node2 * next;
}noderoom;
typedef struct Node3{//����һ����ʱ���������Ϣ�Ľṹ�� 
	char userid[15];//����id
	char name[30];//��Ӱ�� 
	char movieid[10];//��Ӱid
	int month;//��ӳ�·� 
	int day;//��ӳ���� 
	int hour;//��ӳʱ��
	int room;//Ӱ���� 
	struct Node3 * next;
}nodesell;
typedef struct Node4{//����һ����ʱ���Ʊ����¼�Ľṹ�� 
	char name[30];//��Ӱ�� 
	char id[10];//��Ӱid
	int  boxoffice;//Ʊ��
	struct Node4 * next;
}nodeboxoffice;
