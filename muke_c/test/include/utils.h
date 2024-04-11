#ifndef TEST_INCLUDE_UTILS_H_
#define TEST_INCLUDE_UTILS_H_

int Int_Cmp(void* vp1, void* vp2);
int Str_Cmp(void* vp1, void* vp2);

void Swap(void* vp1, void* vp2, size_t size);
void ShuffleArray(int *arr, int n);
void GeneratorRandomArray(int* arr, int n, int bound);
void GeneratorOrderedArray(int* arr, int n);
#endif //TEST_INCLUDE_UTILS_H_
