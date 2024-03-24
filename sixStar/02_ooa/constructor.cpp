#include <iostream>

using namespace std;

class Value
{

public:
    Value() = default;
    Value(const Value &val); // 拷贝构造函数
    ~Value() {}
    // ~Value(int v) {}      // 析构函数不能重载
};

class MyClass
{

public:
    MyClass(){};
    MyClass(const MyClass &cls){}; 
    MyClass(const MyClass &cls, int value){}; // const 避免修改, 实参传递更灵活
    ~MyClass(){};
};

/**
 * 构造函数 & 析构函数 ( 重要的内容 )
 *  构造: 资源申请 & 初始化
 *      - 区分默认初始化和构造初始化
 *      - 构造函数重载
 *      - 默认构造函数 ( = default 和 = 0)
 *      - 初始化列表, 常量成员,  定义域中给出
 *  析构: 资源释放 & 清理
 *      - 不是因为调用析构函数导致对象生命周期结束, 而是生命周期结束时, 会自动调用析构函数, 注意因果关系
 *      - 先构造出来的后析构, 堆内存分配的实例对象除外(手动控制)
 *  拷贝构造: 一种特殊的构造函数, 通过拷贝构造函数, 完成一个对象复制的过程
 *      - Value(const Value& value);  要求第一个参数是当前类对象的引用, 也可以有其它参数
 *      - 调用时机:
 *          1. 使用一个对象去初始化另外一个对象 Value v = value;
 *          2. 使用对象构造另外一个对象 Value v(value);
 *          3. 函数的参数是类的对象
 *          4. 函数的返回值是类的对象
 *      - 实践技巧:
 *          > 防止拷贝构造意外的浅拷贝导致的问题: 防止默认拷贝的发生(防不胜防) -> 声明一个私有的拷贝构造函数, 但是不对它进行定义
 *          > 让程序主动报错
 * 默认的构造函数
 * 默认的拷贝构造函数 - 浅拷贝
 * 默认的拷贝赋值函数 - 浅拷贝
 */
int main(int argc, char const *argv[])
{
    cout << sizeof(MyClass) << endl; // 空类对象占一个字节
    return 0;
}