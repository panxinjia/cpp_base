#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <assert.h>
#include <io.h>
#define DEBUG

/**
 * 预处理(展开头文件) -> 编译(汇编代码) -> 汇编(二进制)
 *  -> 链接(符号引用到直接引用) -> 装载(分配内存页, 虚拟,物理内存映射)
 *  -> 运行(mmu)
 *
 * 宏:
 *  1. 预处理: 展开头文件(编译时), 宏替换
 *  2. 宏定义: 常量, 函数 (没有类型)
 *  3. 条件编译 #if #ifdef #ifndef #elif #else #endif defined(macro)
 */

#if defined(_cplusplus)
extern "C" {
#endif
void add(int a, int b);
#ifdef _cpluscplus
"}"
#endif



void dump(const char* log) {
#ifdef DEBUG
  printf("%s\n", log);
#endif
}

void dumpf(const char* format, ...) {
#ifdef DEBUG
  va_list ap;
  va_start(ap, format);
  vprintf(format, ap);
  va_end(ap);
#endif
}

// 类型定义
typedef int (*CmpFunc)(void*, void*);

int int_cmp(void *vp1, void *vp2) {
  int* ip1 = (int*)vp1;
  int* ip2 = (int*)vp2;
  return *ip1 - *ip2;
}

void* lsearch(void* base, void* key, int n, size_t size,
              CmpFunc cmp_func);

void* lsearch(void *base, void *key, int n, size_t size,
             int (*cmpFunc)(void *, void *)) {
  for (int i = 0; i < n; i++) {
    void* elemAddr = (char*)base + (i * size);
    if (cmpFunc(key, elemAddr) == 0) {
      return elemAddr;
    }
  }
  return NULL;
}

/**
 * 指针操作: 取地址, 解引用, 计算/偏移, 强制转换
 */
int main(int argc, const char *argv[]) {
  int value = 20;
  value <<= 16;
  int *ip = &value;       // 取地址
  short *sp = (short *) ip; // 强制转换, different view memory 不同视角处理内存
  short s1 = *(sp + 0);   // 计算
  short s2 = *(sp + 1);   // 偏移
  PRINT_SHRT(s1);
  PRINT_SHRT(s2);

  int i = UINT_MAX;
  printf("i = %d\n", i); // -1 compiler int

  int key = 4;
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  void* addr = lsearch(arr, &key, 10, sizeof(int), int_cmp);
  assert(addr == arr + 4);

  dumpf("*addr = %d\n", *(int*)addr);
  // printf("*addr = %d\n", *(int*)addr);

  // 左值, 右值
  // 左值: Compiler 是否已经分配了的合法内存空间, 可以作为左值
  // 右值: 临时结果值, 没有分配内存空间
  // 判断: 判断是否是一个左值, 否则是一个右值
  return 0;
}
