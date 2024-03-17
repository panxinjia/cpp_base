#include <iostream>

using namespace std;

void swap(int& a, int& b) {
    int temp  = a;
    a = b;
    b = temp; 
}
int main(int argc, const char* argv[]) {
    int value = 10 ;

    int& ref = value;
    cout << "value = " << value << endl;
    cout << "ref = " << ref << endl; 

    ref = 20;
    cout << "value = " << value << endl;
    cout << "ref = " << ref << endl; 

    // int& ref2 = 10;  // 错误, 引用绑定在左值上

    int x = 10, y = 20;
    swap(x, y); 
    cout << x << ", " << y << endl; 
    return 0;
}