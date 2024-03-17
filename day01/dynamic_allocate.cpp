#include <iostream>

using namespace std;

// TODO: 动态内存分配, 空指针理解
int main(int argc, char const *argv[])
{
    
    // 动态内存分配
    // 1. malloc free 单值
    int* ip = NULL; 
    ip = (int*)malloc(sizeof(int));
    if (ip) {
        *ip = 20;
        cout << *ip << endl;
        free(ip); 
    }

    // 2. 分配多个值
    char* cp = NULL; 
    cp = (char*)malloc(100);
    if (cp) {
        char* q = cp;
        *q++ = 'a';
        *q++ = 'b';
        cout << *q << endl;
        cout << *(q + 1) << endl; 
        free(cp); 
    }

    // 3. 分配内存块
    int* p = (int*)malloc(sizeof(int) * 100);
    if (p) {
        int* q = p;
        *q++ = 10;
        *q++ = 20;
        cout << *p << endl;
        cout << *(p + 1) << endl; 
        free(p);
    }

    cout << "new/delete" << endl;

    int* ip2 = new int;      // 分配单值
    delete ip2;
    int* ip3 = new int(10);  // 分配并初始化
    delete ip3;
    int* ip4 = new int[30];  // 分配内存块
    delete[] ip4;            // 分配内存块不需要声明释放多少, 系统内存分配器会记录对应内存首地址向后分配了多少个字节

    // nullptr 避免整形和指针之间混淆
    // 类型不同, 对于指针的初始化, 在cpp中使用nullptr更好
    cout << typeid(NULL).name() << endl;
    cout << typeid(nullptr).name() << endl;
    return 0;
}
