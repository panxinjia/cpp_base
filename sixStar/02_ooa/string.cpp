#include <iostream>
#include <string> 

using namespace std;

/**
 * stl: string
 *  面向过程, 纯技术理解: 字符数组
 *  面向对象理解: 可变字符串
 */
int main(int argc, char const *argv[])
{
    string s;
    s = "abc123";
    cout << s[2] << endl;
    cout << s.length() << endl;
    cout << s.size() << endl; 
    cout << s.capacity() << endl; 
    s.clear();
    cout << s << endl; 
    // 数值和类型
    cout << (s.empty() == 1 ? "true" : "false") << endl; 
    return 0;
}