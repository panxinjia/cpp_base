#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {

  // 迭代器类型的实例: 指针的包装类型, 提供一组相关操作

  // 正向迭代
  vector<int> nums = {100, 200, 300};
  vector<int>::iterator it = nums.begin();
  while (it != nums.end()) {
    cout << *it << endl;
    it++;
  }
  cout << "--------" << endl;
  // 反向迭代 
  vector<int>::reverse_iterator rit = nums.rbegin();
  while (rit != nums.rend()) {
    cout << *rit << endl;
    rit++;
  }
  cout << "-------" << endl;
  // 只读迭代
  vector<int>::const_iterator cit = nums.cbegin();
  for (auto end = nums.cend(); end != cit; cit++) {
    cout << *cit << endl;
  }

  cout << "-------" << endl;

  // TODO 迭代器失效
  // 1. 迭代过程 新增或者删除
  for (auto it = nums.begin(); it != nums.end(); it++) {
    nums.insert(it, 32);
    break;
    cout << *it << endl;
  }

  // 一旦有修改, 立即退出, 重新迭代 ( 简单暴力, 但是有效 )
  for (const int &value : nums) {
    cout << value << endl;
  }


  // 2. 清理容器资源过程中导致迭代器失效 erase(擦除)

  // 清理资源的最佳实践
  vector<int> iv = {1, 2, 3, 4};
  while (!iv.empty()) {
    auto it = iv.begin();
    it = iv.erase(it);
  }

  // 范例演示
  // 1. 遍历string类型数据
  string s("I Love China");
  for (auto it = s.begin(); it != s.end(); it++) {
    *it = toupper(*it);
  }
  cout << s << endl;

  // 2. vector 容器常用操作与内存释放 (重要-常见操作)
  // TODO 练习
  return 0;
}