#include <iostream>

using namespace std;

/**
 * 1. 变量定义
 * 2. auto: 自动变量, 自动类型推断
*/
int main(int argc, const char* argv[]) {


    // cpp 定义时初始化语法, 和其它语言不同
    // int value{10};
    int value = {5};
    cout << value << endl; 

    int arr[]{12,3,4,5};
    cout << arr << endl;
    for (int i =0 ; i < 4; i++) {
        cout << arr[i] << endl; 
    } 

    // 好处, 语法没毛病, 但值被截断
    int a = 3.14f;
    cout << a << endl;

    // 编译器会提示值被截断, 报错
    // int b{3.14};
    // cout << b << endl; 

    // auto 自动变量, 类型推断(编译时)
    // 避免类型写的很长    
    auto x = 3; 
    cout << sizeof(x) << endl;
    cout << typeid(x).name() << endl;
    return 0; 
}