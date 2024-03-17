#include <iostream>

using namespace std;

// 函数声明, 定义时可以冗余参数定义
void fn(int a, int) { return; } 

// 1. auto 后置返回类型 -> type 
auto add(int a, int b) -> int {
    return a + b; 
}

// 后置返回类型定义
auto fn1(int, int) -> double;
auto sub(int a,  int b) -> int;

// 2. 内联函数 ( 对编译器的提示, 编译时尽量执行内联 )
// --> 查看内联编译的结果
inline auto bar(int a, int b) -> int {
    // 函数体小, 调用频繁
    return a + b;
}

// 3. 函数各种用法总结
void fn3() {}
void fn2() {
    return;         // 语法正确
    return fn3();   // 语法正确
}
// 返回指针和返回引用
int* fn4() {
    int value = 9;
    return &value;   // 严重错误, 返回了一个非法的指针 -> 关联知识: 逃逸分析 -> 决定分配在栈上还是在堆上
}

int& fn5() {
    int value = 10;
    cout << &value << endl;
    return value;   // 疑问: 局部值是否发生了拷贝 ? -> 没有, 和返回局部变量的指针是一样的, 都是错误的
}

// 没有形参, 形参列表为空, 或者声明为 void 可行
int fn6(void) { 
    return 10; 
}

// 函数如果不调用的话,  则可以只有声明部分, 没有定义部分 (临时定义)
int apply(int, int); 
bool test(int, int);

// 引用作为形式参数: 1.多返回值 2.副作用(引用传递)
// C++中更推荐引用类型的形式参数
void fn7(int a, int b, int& result) {
    result = a + b; // 可以实现cpp函数多返回值能力
}

// 函数重载, 方法重载: 参数类型, 顺序
void fs(int i) {}
// void fs(const int i) {} // 重载冲突, 程序实体名一样了, 无法识别
void fs(double d) {}

// 4. const int*, int* const, const int* const  变量修饰
// const int& ref = 20;  -> 只读引用, 可以指向一个字面量


// 5. const 修饰函数参数
// 避免意外的值修改
// 可以让调用更加灵活 -> 理解这句话 -> 明确只读的内容, 可以用 const 修饰提高灵活性
struct Person {
public:
    int number;
    char name[100]; 
};

void updatePerson(const Person& person) {
    // person.number = 200;  // error  只读引用
}

void fn8(const int value) {
    // value = 10; // error
}

int main()
{
    int& k = fn5(); // 引用接收
    int j = fn5();  // fn5的返回值发生了拷贝  -> 安全的
    cout << k << endl; 
    return 0;
}