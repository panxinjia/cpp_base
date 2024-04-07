#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define len 10

void init_pointer(int **ptr, int default_value, int n) {
  *ptr = (int *) malloc(n);
  for (int i = 0; i < n; i++) {
    *(*ptr + i) = default_value;
  }
}

/**
 * 动态内存分配:
 *  分配/释放:   malloc calloc realloc free
 *  内存操作函数: memXXX
 */
int main(int argc, const char *argv[]) {
  // allocate 40bytes
  int *ip1 = NULL;
  // (int*) malloc(sizeof(int) * len);
  // calloc(10, sizeof(int)); // allocate and clean memory by zero 申请并清零
  // realloc(ip1, sizeof(int) * len * 2); // 扩容/缩容, 目标内存块传NULL, 重新分配

  // 改内存, 传目标内存块的地址
  init_pointer(&ip1, 4, len);

  if (ip1) {
    // memset(ip1, 0, sizeof(int) * 10);
    for (int i = 0; i < len; i++) {
      printf("value = %d\n", *(ip1 + i));
    }
    free(ip1);
  }

  return 0;
}
