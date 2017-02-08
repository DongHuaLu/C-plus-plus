// viod*指针 意味着任何类型的地址都可以使用此指针(如果声明 int* 只能对int变量的地址引用此指针)

int main(){
    void* vp;
    char c;
    int i;
    float f;
    double d;
    vp = &c;
    vp = &i;
    //*vp = 3; 会报错,当使用void*,会丢失关于类型的信息,在使用前需要转换正确的类型
    *((int*)vp) =3;
}
