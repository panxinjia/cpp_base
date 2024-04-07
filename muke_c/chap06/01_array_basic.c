#include <stdio.h>
#include <io.h>

#define LEN 10

static int global[LEN];

void PassArray(int arr[], int len) {
  PRINT_INT(sizeof(arr));
  PRINT_INT(sizeof(arr) / sizeof(arr[0]));
}

void VLA() {
  int value = 10;
  int arr[value]; // VLA 变长数组
}

void ArrayWithExpression() {
  // 当做指针访问, 表示值
  int arr[3] = {1, 2, 3};
  int value = 20;
  PRINT_INT(arr[3]); // 越界访问: C语言设计, 相信程序员, 不会报错

  int* p1 = arr + 0;
  int* p2 = arr + 1;
  int* p3 = arr + 2;

  int* p4 = &arr[0];
  int* p5 = &arr[1];
  int* p6 = &arr[2];
  PRINT_HEX(p1);
  PRINT_HEX(p2);
  PRINT_HEX(p3);
  PRINT_HEX(p4);
  PRINT_HEX(p5);
  PRINT_HEX(p6);
}

int main(int argc, const char* argv[]) {
  auto int arr[LEN];
  // init zero value
  auto int arr2[LEN] = {0};
  PRINT_INT_ARR_FLAT(global, LEN);
  PRINT_INT_ARR_FLAT(arr, LEN);
  PRINT_INT_ARR_FLAT(arr2, LEN);

  auto double arr3[] = {3.14, 1.414};
  PRINT_DOUBLE_ARR_FLAT(arr3, 2);

  int arr4[10] = {[2] = 32, 45, 21};
  PRINT_INT_ARR_FLAT(arr4, 10);

  PRINT_INT(sizeof(arr));
  PRINT_INT(sizeof(arr) / sizeof(arr[0]));

  PassArray(arr, LEN);

  ArrayWithExpression();
  return 0;
}
