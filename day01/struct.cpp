#include <iostream>

using namespace std;

// TODO cpp中类相关基础语法
// public 公共 private 私有 protected 继承
struct student {

public:
    int number;
    char name[100];

public: // 权限修饰符 (面向对象封装特性体现)
    // 成员方法
    void speak() {
        // this: 当前对象指针
    }
private: 
    // 成员方法
    void run() {
        // this: 当前对象指针
    }
}; 

// 1. 值作为参数 -> 拷贝, 没有副作用
void foo(student std) {

}

// 2. 引用作为参数 -> 副作用
void bar(student& std) {

}

// 3. 指针作为参数 -> 副作用(不如引用可读性更好, 编码更简单)
void bar2(student* std) {

}

// 4. c++中 struct 和 class 几乎相等 ( 默认访问权限和继承权限有点差别, 实际应用中访问权限都是显示声明的)
// 5. c++标准库中包含了大量丰富的类和函数, 可复用的高性能代码
// 6. 声明 .h 和 定义 .cpp 的分离 ( 工程化 )
    // -> 前项声明 struct X; 

int main() {
    student std;
    std.number = 1001;
    strncpy(std.name, "张三", 100);

    cout << std.number << endl;
    cout << std.name << endl;
    return 0;
}