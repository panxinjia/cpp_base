#include <stdio.h>
#include <io_utils.h>

typedef enum Color {
  RED, GREEN, BLUE
} Color;

typedef enum ImageFormat {
  PNG, JPEG, WEBP = 20, BMP, UNKNOWN
} ImageFormat;

int main(int argc, const char* argv[]) {
  PRINT_INT(PNG);
  PRINT_INT(JPEG);
  PRINT_INT(WEBP);
  PRINT_INT(BMP);
  PRINT_INT(UNKNOWN);

  PRINT_BOOL(JPEG == 1);
  return 0;
}
