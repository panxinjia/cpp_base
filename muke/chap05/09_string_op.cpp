#include <iostream>
#include <cstring>

using namespace std;

// strlen strcmp strcpy     不安全, 依次处理
// strnlen strncmp strncpy  相对安全的 gnu编译器
// strlen_s strcmp_s strncpy_s 相对安全的 msvc编译器
int main(int argc, char const *argv[])
{
    
    char s[11] = "helloworld";
    cout << strlen(s) << endl;
    cout << sizeof(s) << endl; 
    
    // strcmp

    // strcpy
    char s1[10];
    char* s2 = "helloworldaaa"; 
    strncpy(s1, s2, strlen(s2));
    cout << s1 << endl;  // 

    // strcat

    // strchr 字符位置查找

    // strstr 字符串位置查找
    return 0;
}
