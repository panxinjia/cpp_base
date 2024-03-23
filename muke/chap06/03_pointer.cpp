#include <iostream>
#include <memory>


using namespace std;

int main(int argc, char const *argv[])
{
    int i = 10;  int* ip = &i; cout << (*ip) << endl;
    double d = 3; double* dp = &d; cout << (*dp) << endl;
    char c = 'a'; char* cp = &c; cout << (*cp) << endl; 
    // 指针的数组
    void* ps[] = {ip, dp, cp};

    // 数组的指针


    cout << "-->" << endl;

    char a[] = {'a', 'b', 'c'};
    char (*b)[3] = &a; // 数组的指针, 长度也是类型的一部分
    cout << *a << endl; 

    // make_unique()
    return 0;
}
