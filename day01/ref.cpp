#include <iostream>

using namespace std;



void swap(int& a, int& b) {
    int temp  = a;
    a = b;
    b = temp; 
}

// 1. 为什么有了指针, 还需要引用 -> 支持操作符重载
// 2. 为什么有了引用, 还需要指针 -> 兼容C语言
int main(int argc, const char* argv[]) {
    int value = 10 ;
    int c = 300;

    int& ref = c;
    cout << "value = " << value << endl;
    cout << "ref = " << ref << endl; 

    ref = 20;
    cout << "value = " << value << endl;
    cout << "ref = " << ref << endl; 

    // int& ref2 = 10;  // 错误, 引用绑定在左值上

    // 常量引用, 绑定到右值上
    const int& ref3 = 200;
    cout << "ref3 = " << ref3 << endl;

    int x = 10, y = 20;
    swap(x, y); 
    cout << x << ", " << y << endl; 
    return 0;
}