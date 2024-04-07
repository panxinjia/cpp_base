#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int (*Function)(int a, int b);

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div2(int a, int b) { return a / b; }
int rem(int a, int b) { return a % b; }

int eval(int a, int b, Function fn) {
  return fn(a, b);
}

void swap(void* vp1, void* vp2, size_t size) {
  char buf[size];
  // 内存拷贝
  // memmove() 移动
  memcpy(buf, vp1, size);
  memcpy(vp1, vp2, size);
  memcpy(vp2, buf, size);
}

#define SWAP(a, b, type) do { type temp = a; a = b; b = temp; } while(0)
#define SWAP_EXT(a, b) do { typeof(a) temp = a; a = b; b = temp; } while (0)

/**
 * 函数指针: function pointer
 *
 */
int main(int argc, const char* argv[]) {
  int a = 10;
  int b = 3;
  // pointer to xxx function
  Function fn = add;
  printf("result = %d\n", eval(a, b, fn));
  fn = sub;
  printf("result = %d\n", eval(a, b, fn));
  fn = mul;
  printf("result = %d\n", eval(a, b, fn));
  fn = div2;
  printf("result = %d\n", eval(a, b, fn));
  fn = rem;
  printf("result = %d\n", eval(a, b, fn));

  // typeof c / cdecl c++
  typeof(fn) f = add;


  // TODO 双路快速排序
  return 0;
}
