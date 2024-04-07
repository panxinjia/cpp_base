#include <stdio.h>
#include <io.h>

// 只读指针变量, 只读变量指针
int main(int argc, const char* argv[]) {
  int b = 86;
  int value = 10;
  int* ptr = &value;
  // 指针不可变: assign 禁用赋值
  // int* const ptr = &value;
  // 指针指向的值不可变, assign 禁用赋值
  //const int* ptr = &value;
  // const int* const ptr = &value;
  PRINT_INT(value);
  PRINT_INT(*ptr);
  *ptr = 30;
  PRINT_INT(value);

  int** pptr = &ptr;
  **pptr = 40;       // 两跳到value的位置
  PRINT_INT(value);

  char s[] = "abc";  // 内容可变, s 不可变
  s[1] = 'D';
  PRINT_STRING(s);
  PRINT_HEX(s);
  char* s2 = "abc";
  PRINT_STRING(s2);
  // s2[1] = 'D';   //  数据段: 全局初始化常量区
  PRINT_HEX(s2);
  return 0;
}
