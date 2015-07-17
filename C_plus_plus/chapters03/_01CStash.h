// 定义一个CStash C风格的stash

typedef struct CStashTag{
	int size; // 单个的大小
	int quantity; // 存储空间的大小
	int next; // 下一个空存储空间
	unsigned char* storage; // 动态char数组的头
}CStash;

void initialize(CStash* s,int size);
void cleanup(CStash* s);
int add(CStash* s,const void* element);
void* fetch(CStash* s,int index);
int count(CStash* s);
void inflate(CStash* s,int increase);
