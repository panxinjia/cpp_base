#include <stdio.h>
#include <io.h>
/**
 * 危险的指着操作
 * 1. 直接赋值: 直接给出地址, 不常见, 大多数pc应用程序都是通过系统使用虚拟内存, 并非直接使用物理内存
 * 2. 空指针
 * 3. 野指针(不知道指向了哪里, 是否是个合法指针)
 */
static int* global_at_large = NULL;

void DangerPointer() {
  int a = 3;
  global_at_large = &a;
  PRINT_INT(*global_at_large);

  global_at_large = NULL; // 指针用完后置空是个好习惯
}

int main(int argc, const char* argv[]) {
  int* ptr = (int*)100;
  PRINT_HEX(ptr);

  ptr = NULL; // 0值和空指针
  PRINT_BOOL(ptr == NULL);
  PRINT_BOOL(NULL == 0);

  if(global_at_large) { // 指针使用前判断, 是个好习惯
    PRINT_HEX(global_at_large);
  }
  return 0;
}
