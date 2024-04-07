#include <stdio.h>
#include <assert.h>
#include <io.h>

int Summary(int arr[], int len) {
  int sum = 0;
  for (int i = 0; i < len; i++)
    sum += arr[i];
  return sum;
}

void Summary2(int* arr, int len, int* result) {
  for (int i = 0; i < len; i++) *result += *(arr + i);
}

/**
 * ptr as return value: 指针作为参数, 通过副作用返回结果,
 *
 * 1. 多返回值
 * 2. 返回值作为错误码(经典)
 */
int main(int argc, const char *argv[]) {

  int result = 0;
  int arr[5] = {1,2,3,4,5};
  int sum = Summary(arr, 5);
  printf("sum = %d\n", sum);

  Summary2(arr, 5, &result);
  printf("result = %d\n", result);

  assert(result == sum);
  return 0;
}
