#include <stdio.h>
#include <io_utils.h>

//#pragma pack(2)

typedef struct _Person {
  double  id;
  char name[20];
} Person;

/**
 * 内存对齐
 * 1. 成员对齐到自己所占宽度的整倍数上
 * 2. 复合值对齐到最大成员的整倍数上
 */
int main(int argc, const char* argv[]) {

  struct {
    int id;  // 2
    // __attribute(aligned(2)) char  a;  // 2
    char a;
    short b; // 4
    double d;// 8   =>  16字节
  } s1;

  PRINT_INT(sizeof(s1));

  struct {
    char a;
    short b;
    int id;
    double d;
  } s2;
  PRINT_INT(sizeof(s2));

  Person p;
  Person* pp = &p;

  // 0 值, 作为指针, 强转, 取地址, 计算偏移字节数 ( 未在标准中定义的黑魔法尽量少用,
  // 不同编译器可能会造成不可预知的错误 )
  int offset = (size_t)&(((Person*)0)->name);
  printf("offset = %d\n", offset);

  return 0;
}
