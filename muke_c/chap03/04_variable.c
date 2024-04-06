#include <stdio.h>
#include <limits.h>

int main(int argc, const char* argv[]) {
  int value;
  int value_init = 3;
  value = 4;
  value_init = 20;

  printf("value = %d\n", value);
  printf("value_init = %d\n", value_init);

  size_t s1 = sizeof(int);
  size_t s2 = sizeof(&value_init);
  printf("s1 = %llu\n", s1);
  printf("s2 = %llu\n", s2);
  return 0;
}