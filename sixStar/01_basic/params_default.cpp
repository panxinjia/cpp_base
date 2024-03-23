#include <iostream>

using namespace std;

int pow(int a, int b = 2); 

int pow(int a, int b) {
    cout << a << ", " << b << endl; 
    return a * a;
}

int pow(int a) {
    return a * a; 
}

// int summary(int a, int b, int ... params) {
// }

/**
 * 函数参数缺省 
 *      (声明函数) 的时候给个默认值
 * 
 * => 少用, 或者不用形参默认值 -> 可读性不好
 * => 对比形参默认值和可变参数的绑定顺序, 理解参数绑定过程
*/
int main(int argc, const char *argv[]) {

    // int result = pow(2);  // 默认值和函数重载, 调用时发生的冲突
    int (*f)(int) = pow ; //  通过函数指针解决冲突
    int result = f(2); 

    cout << result << endl; 
    return 0;
}