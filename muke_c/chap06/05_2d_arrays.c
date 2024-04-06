#include <stdio.h>
#include <io.h>

// 二位数组, 变长数组
int Summary(int row, int col,
            int nums[][col]) {
  int sum = 0;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      sum += nums[i][j];
    }
  }
  return sum;
}

/**
 * 二维数组, 多维数组
 *
 *  一个数组放的元素, 元素宽度肯定是确定的, 第二维的宽度一定要确定的
 *
 */
int main(int argc, const char *argv[]) {
  int vehicle_limits[5][2] = {
      {1, 2},
      {3, 4},
      {5, 6},
      {7, 8},
      {9, 0}
  };

  int arr1[10] = {0};     // 值初始化
  int arr2[10];
  PRINT_INT_ARR(arr1, 10);
  PRINT_INT_ARR(arr2, 10);

  int value = Summary(5, 2, vehicle_limits);
  PRINT_INT(value);
  return 0;
}
