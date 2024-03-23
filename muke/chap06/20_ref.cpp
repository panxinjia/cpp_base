#include <iostream>
#include <assert.h>

using namespace std;

class Person {

}; 

void updateAge(Person& p) {
    // 修改p的值
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp; 
}

// 基础类型, pass by value 更合适
// 对象, 结构 pass by ref 更合适
int main(int argc, const char* argv[]) {
    int a = 3, b = 4;
    swap(a, b);

    assert(a == 4 && b == 3);    
    return 0; 
}