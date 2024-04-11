#include <stdio.h>
#include <assert.h>
#include <utils.h>
#include <io_utils.h>
#include <search.h>

#define len 100

void test1() {
  int a = 3, b = 4;
  SWAP(a, b);
  PRINT_INT(a);
  PRINT_INT(b);

  int arr[] = {1,2,3,4,5};
  PRINT_INT_ARR(arr, 5);
}
void testUtils() {
  int arr[len] = {0};
  GeneratorOrderedArray(arr, len);
  GeneratorRandomArray(arr, len, len);
  PRINT_INT_ARR(arr, len);

  int a = 3, b = 4;
  Swap(&a, &b, sizeof(int));
  PRINT_INT(a);
  PRINT_INT(b);

  int arr2[len] = {0};
  GeneratorOrderedArray(arr2, len);
  PRINT_INT_ARR(arr2, len);
  ShuffleArray(arr2, len);
  PRINT_INT_ARR(arr2, len);
}
void testLinearSearch() {
  int arr[len] = {0};
  GeneratorOrderedArray(arr, len);
  PRINT_INT_ARR(arr, len);

  int result = LinearSearchBase(arr, 99, len);
  assert(result == 99);
  PRINT_INT(result);
  result = LinearSearchBase(arr, 0, len);
  assert(result == 0);
  PRINT_INT(result);
  result = LinearSearchBase(arr, 200, len);
  assert(result == -1);
  PRINT_INT(result);

  int key = 99;
  void* target = LinearSearch(arr, &key, len, sizeof(int),
                              Int_Cmp);
  assert(target == arr + 99);
  PRINT_INT(*(int*)target);

  key = 0;
  target = LinearSearch(arr, &key, len, sizeof(int), Int_Cmp);
  assert(target == arr);
  PRINT_INT(*(int*)target);

  key = 300;
  target = LinearSearch(arr, &key, len, sizeof(int), Int_Cmp);
  assert(target == NULL);
}

/**
  并发进程: 独立, 竞争, 协作
  并发工具: 互斥锁, 信号量 ( 水流放小一点 )
  原子性 (不会被打断), 可见性 (内存值, 缓存值), 有序性 ( 指令重排序 )
  并发和关联问题: 异常, 有限等待
 */
int main() {

  int arr[len] = {0};
  GeneratorOrderedArray(arr, len);
  PRINT_INT_ARR(arr, len);

  int result = BinarySearchBase(arr, 99, len);
  PRINT_INT(result);
  assert(result == 99);

  return 0;
}
