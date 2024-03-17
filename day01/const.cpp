#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {
    const int value = 10;
    // value = 20;


    // 引用的疑问, 引用是否占用内存
    int& ref = (int&)value;
    ref = 30;
    cout << value << endl;  // 没变
    cout << ref << endl;    // 30 引用是否真的占用内存呢 ? 


    // constexpr  c++11引入关键字, 编译时求值常量表达式
    constexpr int x = 1;
    int b = 3; 
    // constexpr int y = b;  // b 是变量, 无法完成编译时求值 ==> 报错
    return 0; 
}