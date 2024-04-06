#include <stdio.h>
#include <stdarg.h>

// 处理变长参数, 固定套路
// vprintXXX wprintXXX 变长参数, 宽字符函数
void HandleVarargs(int c, ...) {
  va_list ap;
  va_start(ap,c);
  for (int i = 0; i < c; i++) {
    int arg = va_arg(ap, int);
    printf("arg[%d] = %d\n", i, arg);
  }
  va_end(ap);
}

int main(int argc, const char* argv[]) {
  printf("变长参数:\n");
  HandleVarargs(3, 1, 2, 3, 4);
  return 0;
}
