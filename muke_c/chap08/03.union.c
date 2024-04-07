#include <stdio.h>
#include <io_utils.h>

#define OPERATOR_CHAR 0
#define OPERATOR_INT 1
#define OPERATOR_DOUBLE 2

typedef union Operand {
  int int_op;
  char char_op;
  double double_op;
} Operand;

typedef struct Instruction {
  unsigned int operator;
  Operand op;
} Instruction;

void Process(Instruction *instruction) {
  switch (instruction->operator) {
    case OPERATOR_INT:PRINT_INT(instruction->op.int_op);
      break;
    case OPERATOR_CHAR: PRINT_CHAR(instruction->op.char_op);
      break;
    case OPERATOR_DOUBLE: PRINT_DOUBLE(instruction->op.double_op);
      break;
    default:fprintf(stderr, "unkown operator %c\n", instruction->operator);
  }
}

/**
 * union
 *
 * operator operand
 *
 */
int main(int argc, const char *argv[]) {
  Operand op;
  op.int_op = 10;
  op.double_op = 3.14;

  // 表示指令, 状态
  Instruction instruction = {
      .operator = OPERATOR_DOUBLE,
      .op = op
  };

  Process(&instruction);
  return 0;
}
