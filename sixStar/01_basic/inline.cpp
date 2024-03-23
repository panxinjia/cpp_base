#include <iostream>

using namespace std;

// 简单函数: 函数体指令太多, 不推荐写成内联, Compiler 也会进行优化
inline int add(int a, int b) { return a + b; }
inline int sub(int a, int b) { return a - b; }

/**
 * inline: 
 * 函数
 * 内联函数: 以"内存膨胀"的方式, 以空间换时间, 目的是提高程序运行的速度
 * 
 * 对比宏展开, 理解函数重载
 */
int main(int argc, const char *argv[])
{
    add(1, 2);
    add(3, 4);
    return 0;
}