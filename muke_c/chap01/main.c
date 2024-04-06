#include <stdio.h>

/**
 * 编译: 研究翻译的学科 -> 语言转换
 * 1. 调试: lldb msvc编译器调试器, gdb gcc编译器调试器
 */
int main() {
  printf("Hello, World! sizeof(int*)  = %llu\n",
         sizeof(int *));
  for (int i = 0; i < 5; i++) {
    printf("i = %d\n", i);
  }
  return 0;
}
