#ifndef CHAP06_INCLUDE_IO_H_
#define CHAP06_INCLUDE_IO_H_

// #define PRINT_META
// 格式化输出
#ifdef PRINT_META
#define PRINTLNF(format, ...) printf("[%s:%d] %s:"format"\n", \
  __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__)
#else
#define PRINTLNF(format, ...) printf(format"\n", ##__VA_ARGS__)
#endif

// 打印数组
#define PRINT_INT(value) PRINTLNF(#value" => %d", value)
#define PRINT_HEX(value) PRINTLNF(#value" => 0x%x", value)

// 打印数组
#define PRINT_INT_ARR(arr, len) { \
  for (int i = 0; i < len; i++) {   \
      PRINT_INT(arr[i]);            \
  }                                 \
}

#define PRINT_INT_ARR_FLAT(arr, len)  \
  printf("[");                         \
  for(int i = 0; i < len; i++) {       \
    printf("%d", arr[i]);              \
    if (i != len - 1) {                \
      printf(", ");                    \
    }                                  \
  }                                    \
  printf("]\n");\


#define PRINT_DOUBLE_ARR_FLAT(arr, len)  \
  printf("[");                         \
  for(int i = 0; i < len; i++) {       \
    printf("%.4f", arr[i]);              \
    if (i != len - 1) {                \
      printf(", ");                    \
    }                                  \
  }                                    \
  printf("]\n");\


#endif //CHAP06_INCLUDE_IO_H_
