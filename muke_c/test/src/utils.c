#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <utils.h>

int Int_Cmp(void* vp1, void* vp2) {
  int* ip1 = (int*)vp1;
  int* ip2 = (int*)vp2;
  return *ip1 - *ip2;
}
int Str_Cmp(void* vp1, void* vp2) {
  const char* sp1 = (char*)vp1;
  const char* sp2 = (char*)vp2;
  return strcmp(sp1, sp2);
}

void Swap(void *vp1, void *vp2, size_t size) {
  void *buf = malloc(size);
  assert(buf != NULL);
  memcpy(buf, vp1, size);
  memcpy(vp1, vp2, size);
  memcpy(vp2, buf, size);
  free(buf);
}

void ShuffleArray(int *arr, int n) {
  srand(time(NULL));
  for (int i = n - 1; i > 0; i--) {
    int rnd = rand() % i;
    Swap(arr + i, arr + rnd, sizeof(int));
  }
}

void GeneratorRandomArray(int *arr, int n, int bound) {
  srand(time(NULL));
  for (int i = 0; i < n; i++) {
    *(arr + i) = rand() % bound;
  }
}

void GeneratorOrderedArray(int *arr, int n) {
  assert(arr != NULL);
  for (int i = 0; i < n; i++) {
    *(arr + i) = i;
  }
}

