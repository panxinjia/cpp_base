#include <iostream>

using namespace std;

// #define const 定义符号常量, 没有绑定的类型
// enum 可以定义绑定类型

// c语言语法
enum color {
    RED, BLUE, YELLOW, UNKOWN
}; 


// cpp 语法, 枚举值
typedef enum _type {
    CLASS, ABSTRACT, INTERFACE, ENUM, GENERIC_CLASS 
} type; 

// cpp 设计哲学: 带点宗教色彩, 崇尚自由, 想要什么就可以去创造什么
// 自由观
int main(int argc, char const *argv[])
{
    cout << RED << endl;
    cout << BLUE << endl;
    cout << YELLOW << endl;
    cout << UNKOWN << endl;
    return 0;
}
