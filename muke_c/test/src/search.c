#include <stdio.h>

int LinearSearchBase(int arr[], int key, int len) {
  for (int i = 0; i < len; ++i) {
    if (arr[i] == key) {
      return i;
    }
  }
  return -1;
}

void* LinearSearch(void* base, void* key, int len, size_t size,
                   int (*cmpFunc)(void*, void*)) {
  for (int i = 0; i < len; i++) {
    void* elemAddr = (char*)base + (i * size);
    if (cmpFunc(elemAddr, key) == 0) {
      return elemAddr;
    }
  }
  return NULL;
}

int BinarySearchBase(int arr[], int key, int len) {

  return -1;
}
void* BinarySearch(void* lp, void* rp, void* key, size_t size,
                   int (*cmpFunc)(void*, void*)) {
  return NULL;
}