#include <stdio.h>

void EmptyParamList() {

}

// 空参数列表和C++的区别
int main(int argc, const char* argv[]) {
  printf("Hello, World!\n");
  EmptyParamList();
  EmptyParamList(1);
  EmptyParamList(1,2);
  return 0;
}
