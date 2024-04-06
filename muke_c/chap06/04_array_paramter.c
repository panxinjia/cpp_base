#include <stdio.h>
#include <io.h>

// 数组作为函数参数 arr => pointer type 退化成指针
// 需要给出长度值
int Summary(const int arr[], int len) {
  int sum = 0;
  for (int i = 0; i < len; i++) {
    sum += arr[i];
  }
  return sum;
}

int main(int argc, const char *argv[]) {
  int arr1[] = {1, 2, 3, 4, 5};
  int value = Summary(arr1, 5);
  PRINT_INT(value);
  // 打印数组
  PRINT_INT_ARR(arr1, 5);
  return 0;
}
