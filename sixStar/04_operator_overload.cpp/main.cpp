#include <iostream>
#include "./Complex.h"

using namespace std;

/**
 * 运算符重载
 *  1. 运算符重载规则 2. 自主实现运算符重载 3. 通过重载运算符, 扩展运算符功能
 * > 基础语法
 * > 规则详解
 * > 重载输入输出 << >>
 * > 重点注意事项
 */
int main(int argc, const char *argv[])
{
    Complex c1(1.0, 2.0);
    Complex c2(3.0, 4.0); 
    c1.display();
    c2.display();
    return 0;
}