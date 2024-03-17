#include <iostream>

using namespace std;

// 函数声明, 定义时可以冗余参数定义
void fn(int a, int) { return; } 

// 1. auto 后置返回类型 -> type 
auto add(int a, int b) -> int {
    return a + b; 
}

// 后置返回类型定义
auto fn1(int, int) -> double;
auto sub(int a,  int b) -> int;

// 2. 内联函数 ( 对编译器的提示, 编译时尽量执行内联 )
inline auto bar(int a, int b) -> int {
    // 函数体小, 调用频繁
    return a + b;
}


int main()
{

    return 0;
}