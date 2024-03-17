#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * 1. vector 类型简介: 标准库动态数组, 容器
 *    - 不能存放引用, 引用是别名, 不是对象
 * 2. 定义和初始化vector类型实例
 * 3. vector 上的操作
 *      对范围for进一步理解
 */
int main(int argc, char const *argv[])
{
    vector<int> v = {1, 2, 3}; // 类模板实例化过程

    // 定义和初始化
    vector<string> ss;
    // 空vector
    ss.push_back("abc");
    ss.push_back("tom");

    // 元素拷贝
    
    return 0;
}
