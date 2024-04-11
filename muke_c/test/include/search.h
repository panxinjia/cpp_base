#ifndef TEST_INCLUDE_SEARCH_H_
#define TEST_INCLUDE_SEARCH_H_

#include <stdio.h>

// 线性查找
int LinearSearchBase(int arr[], int key, int len);
void* LinearSearch(void* base, void* key, int len, size_t size,
                   int (*cmpFunc)(void*, void*));

// 二分查找
int BinarySearchBase(int arr[], int key, int len);
void* BinarySearch(void* lp, void* rp, void* key, size_t size,
                   int (*cmpFunc)(void*, void*));


#endif //TEST_INCLUDE_SEARCH_H_
