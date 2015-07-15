// 静态类型转换


void func(int a){
    
}

int main(){
    int i =32767;
    long l;
    float f;
    l = i;
    f = i;
    l = static_cast<long>(i);
    f = static_cast<float>(i);

    // 窄化变化,从大类型转换成小类型,可能造成数据丢失,会给出警告,使用static_cast可以消除警告
    i = l; // 警告
    i = f; // 警告
    i = static_cast<int>(l);
    i = static_cast<int>(f);
    char c = static_cast<char>(i);

    // void*强转 void*不进行强转无法进行赋值操作
    void* vp = &i;
    float* fp = (float*) vp;
    fp = static_cast<float*>(vp);

    // 一些系统自动进行的类型转换
    double d = 0.0;
    int x = d; // 自动转换
    x = static_cast<int>(d);
    func(d); // 自动转换,会收到警告
    func(static_cast<int>(d));
}
