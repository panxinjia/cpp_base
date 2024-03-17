#include <iostream>
#include <cstdio>

using namespace std;

namespace zs {
  void radius() {
    cout << "zs:radius" << endl;
  }
}

namespace lisi {
  void radius() {
    cout << "lisi:radius" << endl;
  }
}

namespace zs {
  int add(int a, int b) {
    return a + b;
  }
}

struct student {
  char name[100];
  int number;
};

int main(int args, const char* argv[]) {
  // namespace
  zs::radius();
  lisi::radius();

  int sum = zs::add(3, 4);
  cout << sum << endl;

  // 标准输入输出 std 标准库命名空间, cout end: cpp中标准iostream对象实例
  std::cout << "一起学习cpp" << std::endl;

  int value = 3;
  cout << value << " 的平方是 " << (value * value) << endl;
  value++;
  cout << value << " 的平方是 " << (value * value) << endl;

  // 不太好的想写法, 副作用和输出语句在一块
  int i = 2;
  cout << i-- << ", " << i-- << endl;
  return 0;
}