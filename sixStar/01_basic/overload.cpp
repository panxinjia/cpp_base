#include <iostream>

using namespace std;

int foo() { return 0; }
// double foo() {}    // error

void bar(int i) { cout << "bar(int)" << endl; };
void bar(float f) { cout << "bar(float)" << endl; }
/**
 * 函数重载: 同一个项目中, 函数名可以想通
 *
 * 1. 函数名
 * 2. 参数 (类型, 顺序, 数量)
 * 3. 返回值不参与重载讨论
 *
 * - 函数重载 与 参数默认值 ( 如果有冲突, 可以定义函数指针解决 )
 *
 * ==> 二义性 ( 缺少关键信息), 同理解决二义性的方法 => 提供关键信息, 编译器就会通过了
 */
int main(int argc, const char *argv[])
{
    // bar(int(3.14));

    void (*f)(float) = bar;
    f(3);
}