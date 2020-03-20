//各种结构体定义文件 
typedef struct Node{//定义一个临时存放用户输入的id和key结构体 
	char id[15];
	char key[18];
	int position;
	struct Node * next;
}node;

typedef struct Node1{//定义一个临时存放影片信息的结构体 
	char name[30];//电影名 
	char id[10];//电影id 
	int month;//上映月份 
	int day;//上映日期
	int room;//上映影厅 
	int hour;//上映时间 
	struct Node1 * next;
}nodemovie;
typedef struct Node2{//定义一个临时存放影厅信息的结构体 
	int room;//影厅号 
	int people;//容纳量 
	struct Node2 * next;
}noderoom;
typedef struct Node3{//定义一个临时存放销售信息的结构体 
	char userid[15];//购买id
	char name[30];//电影名 
	char movieid[10];//电影id
	int month;//上映月份 
	int day;//上映日期 
	int hour;//上映时间
	int room;//影厅号 
	struct Node3 * next;
}nodesell;
typedef struct Node4{//定义一个临时存放票房记录的结构体 
	char name[30];//电影名 
	char id[10];//电影id
	int  boxoffice;//票房
	struct Node4 * next;
}nodeboxoffice;
