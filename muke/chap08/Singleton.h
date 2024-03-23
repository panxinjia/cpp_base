//
// Created by m1513 on 2024/3/23.
//

#ifndef CHAP08__SINGLETON_H_
#define CHAP08__SINGLETON_H_

#include <iostream>
using namespace std;
class Singleton {
//   私有化构造器, 避免意外创建实例
 private:
    Singleton();
    virtual ~Singleton();
 public:
    // 静态成员
    static Singleton* instance;
    static const Singleton* getInstance();

 public:
    static inline void foo() {
        cout << "Singleton.foo()" << endl;
    }
};

#endif //CHAP08__SINGLETON_H_
