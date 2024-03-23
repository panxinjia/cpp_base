#include <iostream>
#include "Complex.h"
#include "Singleton.h"
using namespace std;
int main() {

    {
//        Complex a(1.0, 2.0);
//        Complex b(2.0, 3.0);

//拷贝构造
//        Complex c = b;
//        Complex d = b;
//        Complex e = {c};
//        Complex f(b);
//        Complex g{b};
//拷贝赋值, 没有新对象被创建
//        a = b;
//        std::cout << "Hello, World!" << std::endl;

        // + 运算符重载

//        Complex c;
//        c = a + b;  //  + 理论上是要返回一个新值, 注定是要创建对象的
//        Complex c = a + b;

//        Complex b = ++a;    // operator++ 返回值作为参数, 调用了拷贝构造函数
//        cout << &a << ", " << a.GetReal() << endl;
//        cout << &b << ", " << b.GetReal() << endl;
//
//        cout << a << endl;
//        cout << b << endl;
    }

    const Singleton* const kInstance = Singleton::getInstance();
    kInstance->foo();
    kInstance->foo();
    return 0;
}
