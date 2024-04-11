#ifndef TEST_INCLUDE_IO_UTILS_H_
#define TEST_INCLUDE_IO_UTILS_H_
#include <stdio.h>
//#define IO_META
#ifdef IO_META
#define PRINTLNF(format, ...) printf("(%s: %d)[%s]:"format"\n", \
              __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__)
#else
#define PRINTLNF(format, ...) printf(format"\n", ##__VA_ARGS__)
#endif


#define PRINT_CHAR(value) PRINTLNF(#value" => %c", value)
#define PRINT_SHRT(value) PRINTLNF(#value" => %hd", value)
#define PRINT_INT(value) PRINTLNF(#value" => %d", value)
#define PRINT_LONG(value) PRINTLNF(#value" => %ld", value)

#define SWAP(a, b) do { typeof(a) temp = a; a = b; b = temp; } while (0)
#define PRINT_INT_ARR(arr, len) \
  printf("[");                   \
  for (int i = 0; i < len; i++) { \
    printf("%d", arr[i]);               \
    if (i != len - 1) printf(", "); \
  }\
  printf("]\n")
#endif
