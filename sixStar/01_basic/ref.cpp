#include <iostream>

using namespace std; 

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp; 
}

// 内存分配器
// void* alloctor(int numBytes) { return malloc(numBytes); }

/**
 * 引用: 
 *  1. 给一个变量或者对象起别名
 *  2. 声明引用是必须初始化
 * 
 * => 变量, 参数, 返回值上使用引用, 减少值拷贝, 传递副作用
 * => 是否只能绑定到左值上 ( 是否占用空间 )
 * => 右值引用
 */
int main(int argc, const char *argv[])
{
    int value = 10;
    int& ref = value; 
    
    ref = 200;
    cout << "value = " << value << endl;
    cout << "ref = " << ref << endl; 

    const int& ref2 = 300;
    // ref2 = 300;
    cout << ref2 << endl; 

    // 右值引用, 绑定到常量上
    int&& ref3 = 400; 
    return 0;
}