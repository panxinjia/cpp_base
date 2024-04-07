#include <stdio.h>
#include <io.h>

int main(int argc, const char* argv[]) {
  // char s[12] = "hello world";
  // \0 NULL结尾表示一个字符串
  char s[] = "hello world";

  for(int i = 0; i < 11; i++) {
    printf("s[%d] = %c\n", i, s[i]);
  }

  PRINTLNF("%s", s);
  return 0;
}
