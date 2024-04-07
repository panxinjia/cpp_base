#include <stdio.h>
#include <io_utils.h>

// 类型定义 struct fraction
struct fraction {
  int num;
  int denum;
};

// 类型定义 + 别名
typedef struct Person {
  unsigned int sid;
  char sno[10];
  char name[50];
} Person;

typedef struct Company {
  char address[10];
  char extraValue[20];
} Company;

typedef struct Employee {
  char* name;
  Company* c1;  // 指针嵌套
  Company c2;   // 值嵌套
  struct {    // 匿名嵌套
    int value;
  } Value;
} Employee;

int main(int argc, const char *argv[]) {
  printf("structure!\n");
  struct fraction f = {.num = 10, .denum = 3};
  struct fraction* fp;
  fp = &f;
  PRINT_INT(fp->num);
  PRINT_INT(fp->denum);

  struct fraction* fp2 = (struct fraction*)&(fp->denum);
  PRINT_INT(fp2->num);
  PRINT_INT(fp2->denum); // 越界访问内存, 不会报错

  Company c1;
  // 结构初始化
  Employee  employee = {.name = "alice", .Value = {.value = 20},
                        .c1 = &c1, .c2 = {.extraValue = "abc", .address = "beijing"}};

  struct {
    int a;
    int b;
  }s1, s2;
  s1.a = 10;
  s2.b = 20;

  PRINT_INT(s1.a);
  PRINT_INT(s2.b);
  return 0;
}
