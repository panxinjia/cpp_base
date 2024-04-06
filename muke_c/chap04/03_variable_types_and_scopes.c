#include <stdio.h>

// 函数原型作用域
double Add(double a, double b);
// 函数原型作用域
double Sort(int size, int array[size]);

// 全局作用域
int global_value = 20;
// 文件作用域
static int static_value = 30;

void LocalStaticVar(void) {
  static int local_static_value; // 全局生命周期, 局部作用域, 变量保存在数据段
  int non_static_var;        // 局部作用域变量, 需要初始化
  printf("local_static_value = %d\n", local_static_value++);
  printf("non_static_var = %d\n", non_static_var++);
}

void CleanMemory() {
  int easer = -1;
}

// 寄存器变量: 直接将变量分配在寄存器上进行读写, 而不是经过栈
// 速度会块一些, 但是这些操作通常交给编译器自己进行
void PassByRegister(register int a) {

}

void PassByMemory(int a) {

}

int main(int argc, const char* argv[]) {
  printf("变量类型和作用域:\n");

  // 函数作用域
  auto int value = 0;
  {
    // 块作用域
    auto int value = 10;
    printf("value = %d\n", value);
  }
  printf("value = %d\n", value);

  LocalStaticVar();
  CleanMemory();    // 栈帧分配到同一块内存上了, 未初始化变量分配在了上一个函数的地址上
  LocalStaticVar();
  CleanMemory();
  LocalStaticVar();
  return 0;
}
