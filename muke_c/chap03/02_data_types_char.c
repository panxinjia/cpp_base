#include <stdio.h>
#include <wchar.h>

int main(int argc, const char* argv[]) {
  char a = 'a';
  char char_1 = '1'; // 49
  char char_0 = '0'; // 48

  char i = 0;  // \0  NULL
  // \n \t \r \v \b \a  特殊字符 - 转义
  char newline = '\n';
  char char1_escape_oct = '\61';  // 49
  char char1_escape_hex = '\x31';  // 49

  // literal 字面量
  // ascii c支持的基础字符集

  // 宽字符 wchar_t
  // 2个字节 宽字符
  wchar_t wc = L'中';
  wchar_t wc_hex = L'\u4e2d'; // 直接指定码点值

  const char* s = "中";
  return 0;
}