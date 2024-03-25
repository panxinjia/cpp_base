#include <iostream>

using namespace std;

template<typename R, typename K, typename V>
void swap1(R& v1, R& v2) {
    R temp = v1;
    v1 = v2;
    v2 = temp;
}

template<class R>
void swap2(R& v1, R& v2) {
    R temp = v1;
    v1 = v2;
    v2 = temp;
}

// 泛型编程, 鸭子类型, 动态绑定
// 编译时可以知道 R到底可以不可以Get, 但是打代码的时候不知道
template<typename R>
string download(const R& r) {
    return r.Get();
}

/**
 * 模板
 *  > 泛型编程: 编写和类型无关的代码 <--- c++实现方式:模板
 *  > 模板对于编译器来说是缺少编译信息的(类型), 调用时展开
 *
 *
 * 1. 函数模板
 *      - 模板函数和普通函数的重载关系
 *      - 关于重载针对特定类型的模板函数和操作符重载
 * 2. 类模板
 *      - 类型不完整, 不能直接定义对象
 *      - 模板类型也可以给默认类型
 *      - 类的成员函数定义
 *      - 类模板作为函数的参数 (多种写法, 主要三种写法)
 *          1. 固定类模板的类型参数
 *          2. 函数模板化, 定义模板类型
 *          3. 直接整个类作为模板函数的参数
 *      - 类模板和继承
 *      - 注意事项:
 *          模板类的声明和定义, 一定要写在同一个文件里(编译单元) .hpp
 * 3. 类模板和友元函数
 *      在类模板中使用友元函数
 */
int main(int argc, const char *argv[]) {
    int a = 3, b = 4;
    swap2(a, b);

    cout << a <<endl;
    cout << b << endl;
    return 0;
}