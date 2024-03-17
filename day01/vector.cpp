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

    // 定义和初始化      -> 用的多
    vector<string> ss;
    ss.push_back("abc");
    ss.push_back("tom");

    // 元素拷贝赋值初始化 -> 拷贝赋值

    // 列表初始化       -> 常用

    // 默认初始化(个数)  -> 用的不多

    // 其它初始化方式
    // () 一般表示元素数量这个概念
    // [] 一般表示元素内容这个概念  -> 这个规律不绝对
    vector<int> iv(10);   // 10个0
    vector<int> iv2{10};  // 一个10
    vector<string> sv1{"hello"};
    vector<string> sv2{10}; // 特殊情况 10个string元素, ""
    vector<string> sv3{10, "abc"}; // 10个abc
    vector<int> iv3(10, 1); // 10个1
    vector<int> iv4{10, 1}; // 2个元素
    // 使用 {} 初始化时, 需要注意区分类型

    // vector 上的操作
    // empty push_back size clear []访问 = == !=

    // 范围for操作

    // 范围for是迭代器的语法糖, 并发修改异常 (迭代时执行了插入, 删除操作)

    return 0;
}
