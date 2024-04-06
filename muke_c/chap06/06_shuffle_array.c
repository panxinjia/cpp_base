#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <io.h>


void swap(void* ip1, void* ip2, size_t size) {
  char buf[size];
  memcpy(buf, ip1, size);
  memcpy(ip1, ip2, size);
  memcpy(ip2, buf, size);
}


void Swap(int arr[], int m, int n) {
  int temp = arr[m];
  arr[m] = arr[n];
  arr[n] = temp;
}

void ShuffleArray(int arr[], int len) {
  srand(time(NULL));
  for (int i = len - 1; i > 0; i--) {
    int rnd = rand() % i;
    swap(arr + i, arr + rnd, sizeof(int));
  }
}

void Partition(int arr[], int len, int l, int r) {
}

// TODO 快速排序
void QuickSort(int arr[], int len, int l, int r) {

}

#define PLAYER_COUNT 50
int main(int argc, const char* argv[]) {
  int arr[PLAYER_COUNT] = {0};
  for (int i = 0; i < PLAYER_COUNT; i++) {
    arr[i] = i;
  }
  // 打乱数组元素 ( quick sort 需要的操作 )
  ShuffleArray(arr, PLAYER_COUNT);
  PRINT_INT_ARR_FLAT(arr, PLAYER_COUNT);

  return 0;
}
