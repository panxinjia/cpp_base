#include <stdio.h>

// 函数原型声明
double F(double);
double G(double, double, double);

// 函数定义
double F(double x) {
  return x * x + x + 1;
}

double G(double x, double y, double z) {
  return x * x + y * y + z * z;
}

int main(int argc, const char* argv[]) {
  double d = 3.14;
  F(d);
  G(d, d, d);
  return 0;
}
