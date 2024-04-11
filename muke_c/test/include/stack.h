#ifndef TEST_INCLUDE_STACK_H_
#define TEST_INCLUDE_STACK_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * 通用栈结构
 */
typedef struct Stack {
  void *elems;        // 申请的存储空间首地址
  int n;              // 元素宽度(占用字节数)
  int size;           // 存储元素个数
  int capacity;       // 申请的存储空间大小
  void (*freeFn)(void *);
} Stack;

void NewStack(Stack *stack, void (*freeFn)(void *));

int Size(Stack* stack);
int Capacity(Stack* stack);

void DisposeStack(Stack *stack);

#endif
