#include <iostream>

using namespace std;

// 字符串的指针表示
int main(int argc, char const *argv[]) {
  char name[11] = "helloworld";
  char* name2 = "helloworld";   // const char* name2 = '常量存储区域'
  name2 = name;
  for (int i = 0; i < 10; i++) {
    name[i]+=1;
  }
  cout << name << endl;

  for (int i = 0; i < 10; i++) {
    name2[i]+=1;
  }

  // 地址/内容 可变/不可变
  // 指针指向的内容是否可变, 取决于内容所在区域
  cout << name2 << endl;
  return 0;
}
