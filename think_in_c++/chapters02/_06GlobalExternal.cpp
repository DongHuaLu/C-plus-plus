// 在一个文件中使用extern,声明另一个文件中存在的全局变量,那么在这个文件中也可以使用这个数据;
extern int global;
void func(){
    global = 50;
}
