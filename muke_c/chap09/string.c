#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void base() {
  char s[] = "hello";
  printf("len = %lu\n", strlen(s));

  char sql[] = "select id, name, age "
               "from t_user "
               "where id = ? "
               "and name like '%?%' "
               "and age = ?";
  printf("sql = %s\n", sql);

  // declare
  char s1[] = "hello";
  const char* const s2 = "hello";
  char* const s3 = strdup("hello world");
  printf("sql addr = 0x%x\n", sql); // 栈段
  printf("s1 addr = 0x%x\n", s1);   // 栈段
  printf("s2 addr = 0x%x\n", s2);   // 数据段
  printf("s3 addr = 0x%x\n", s3);   // 堆段
  // 释放堆段内存
  free(s3);
  // s3 = s1;
  // s2[3] = 'x';
  // s2 = s; re point
  // char s3[3] = "hello"; // error
}

int my_str_len(const char* s) {
  int count = 0;
  while (*(s + ++count) != '\0');
  return count;
}
char* my_str_cpy(char* dst, const char* src) {
  char* ptr = dst;
  while((*dst++ = *src++));
  return ptr;
}
void test_func() {
  char s1[] = "hello";
  int len = my_str_len(s1);
  printf("len = %d\n", len);

  // strcpy 包含结尾 \0
  char t[100];
  char* p = strcpy(t+1, s1);

  t[1] = 'A';
  printf("s1 = %s\n", s1);
  printf("p = %s\n", p);
  printf("t = %s\n", t + 1);

}

int main(int argc, const char* argv[]) {
  // base();
  test_func();

  return 0;
}
