#include <iostream>

using namespace std;

/**
 * cpp 对bool值的定义, 占用一个字节
 *  true false 1 0
 * bool类型解读原则: 非0为真, 0为false
 */
int main(int argc, const char *argv[])
{
    cout << sizeof(bool) << true << false << endl;

    bool visable = 100; // type conversion
    cout << visable << endl;
    return 0;
}