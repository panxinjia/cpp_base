#include <stdio.h>
#include <limits.h>

int main(int argc, const char* argv[]) {
  // 只读变量: 防止意外的赋值, 防君子不防小人
  const int kRed = 0xff0000;
  const int kGreen = 0x00ff00;
  const int kBlue = 0x0000ff;

  // const int*  p_k_red = &kRed;

  int* p_k_red = &kRed;
  *p_k_red = 200;

  printf("kRed = %d\n", kRed);

  // 宏
  // 真正的常量, 运行时已经不存在了, 编译时就会被替换成字面量
  #define RED 0xff0000
  #define GREEN 0x00ff00
  #define BLUE 0x0000ff

  printf("RED = %x\n",RED);
  printf("GREEN = %x\n",GREEN);
  printf("BLUE = %x\n",BLUE);

//  宏定义:  常量的马甲
  #undef RED
  #undef GREEN
  #undef BLUE

//  printf("RED = %x\n",RED);
//  printf("GREEN = %x\n",GREEN);
//  printf("BLUE = %x\n",BLUE);

// 硬编码: 有意义的值被定义成了常量值
// 通过宏定义有意义的值
  return 0;
}
