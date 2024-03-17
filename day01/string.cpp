#include <iostream>
#include <string>

using namespace std;

// 0. 标准库类型 -> 可变长字符串 string 
// 1. string 声明, 定义
// 2. string 常用方法
int main(int argc, char const *argv[])
{
    string s;
    char s1[100] = "hello world";   // 值在栈上       , 不可重新指向, 但是可以修改
    const char* s2 = "hello world"; // 值在数据段常量区, 只读

    // 定义, 初始化     --> 规律


    // 常用操作
    // empty size length  []访问线性结构, + 运算符, = 拷贝赋值, == 判断是否相等, != 判断是否不同,  
    // c_str() 返回c风格字符串(内容指针常量 \0结尾) -> 和c语言兼容
    // c语言字符数组初始化string
    // 读写 string 对象
    // 字面值和string相加
    // 范围for对string的使用  toupper tolower  通过函数改变string内容值
    // => 理解操作符重载

    return 0;
}
