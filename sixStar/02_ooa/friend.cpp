#include <iostream>

using namespace std;

// 前项声明
class B;
class C;

class A {

// 友元函数
friend void foo(A& a); 
// 友元类
friend class B; 
friend class C;

private:
    int num;

};

void foo(A& a) {
    cout << a.num << endl; 
}

class B {
public:
    void speak(A& a) {
        cout << a.num << endl; 
    }
};

class C {
    void run(A& a) {
        cout << a.num << endl; 
    }

    void work(A& a) {
        cout << a.num << endl;
    }
};

/**
 * 友元: 友元函数, 友元类, 友元类可以创建友元对象
 *  类的特性之一就是封装, 友元是打破封装的手段
 * - 是个好东西, 但是不要滥用
 * 
 * - 前项声明
 * - 友元是单向的, 不传递
 * - 友元没有继承性, 每个class声明的friend成员都是独立的
 */
int main(int argc, char const *argv[])
{

    return 0;
}