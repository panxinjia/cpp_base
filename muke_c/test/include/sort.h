#ifndef TEST_INCLUDE_SORT_H_
#define TEST_INCLUDE_SORT_H_

typedef enum _sort_type {
  BUBBLE,
  SELECTION,
  INSERTION,
  MERGE,
  QUICK,
  HEAP
} SortType;

void BubbleSortBase(int arr[], int len);
void SelectionSortBase(int arr[], int len);
void InsertionSortBase(int arr[], int len);

#endif //TEST_INCLUDE_SORT_H_
