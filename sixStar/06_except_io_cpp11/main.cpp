#include <iostream>
#include <exception>

using namespace std;

// 异常处理
double div(double a, double b) {
//    没有异常信息, 返回标值
//    if (b == 0.0 ) {
//        cout << "-- divide zero --" << endl;
//        return 0.0;
//    }

    if (b == 0.0) {
        // throw 异常信息: 异常可以是多种类型
        // throw "this is an error"; // 抛出异常之后, 后续代码不会继续执行
        throw 123;
        // throw false;
    }
    return a / b;
}
void exceptionDemo() {
    //    int num = 0;
//    int value = 10 / num;
//    cout << value << endl;

    try {
        cout << div(10.0, 0.0) << endl;
    } catch (const char *msg) {
        cout << msg << endl;
    } catch (int a) {
        cout << a << endl;
    } catch ( ... ) {
        // 兜底捕获, 未知异常
        cout << " unkown error" << endl;
    }
}
// 已经提供好的异常信息,
void bar() {
    // explicit 精确的, 不能隐式转换的值
    exception e;
    // logic_error;
}

// 自定义异常
class MyException: public exception {

 public:

    // 覆盖异常抛出的信息
    const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override {
        return exception::what();
    }
};

/**
 * 补充
 *
 * 1. 异常处理机制
 *  throw try catch 三个关键字
 * 2. IO, 文件流
 *
 * -------- 异常与资源管理 --------
 *
 * 3. C++11 标准
 *
 */
int main() {

    return 0;
}
