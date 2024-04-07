#ifndef CHAP07_INCLUDE_IO_H_
#define CHAP07_INCLUDE_IO_H_
#include <stdio.h>
#define PRINTLNF(format, ...) printf(format"\n", ##__VA_ARGS__)


#define PRINT_BOOL(value) PRINTLNF(#value" => %s", value == 0 ? "false" : "true")
#define PRINT_SHRT(value) PRINTLNF(#value" => %hd", value)
#define PRINT_INT(value) PRINTLNF(#value" => %d", value)
#define PRINT_HEX(value) PRINTLNF(#value" => 0x%x", value)
#define PRINT_STRING(value) PRINTLNF(#value" => %s", value)

#endif
