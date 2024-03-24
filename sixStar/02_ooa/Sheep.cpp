#include <iostream>
#include <cstring>

using namespace std;

// C++语言玩家有大把对象

class Sheep
{
    // 数据成员
private:
    int age;

public:
    char name[32];
    // 成员函数
private:
    // 定义和声明, 一起写, .h .cpp .hpp .m .mm .c .cc .c 都是合法扩展名
    inline void speakEnglish()
    {
        cout << "myname is:" << this->name << ", and i"
             << this->age << "years old" << endl;
    }

public:
    Sheep()
    {
        cout << "默认构造函数" << endl;
    }

    Sheep(const char *name, int age)
    {
        strcpy(this->name, name);
        this->age = age;
        cout << "有参数构造函数" << endl;
    }

    Sheep(const Sheep &sheep)
    {
        strcpy(this->name, sheep.name);
        this->age = sheep.age;
        cout << "拷贝构造" << endl;
    }

    ~Sheep()
    {
        cout << "~Sheep()析构" << endl;
    }

    inline void SetAge(int age)
    {
        this->age = age;
    }
    // 声明域
    void eat();
    void speak();
};

// 定义域
void Sheep::eat()
{
    cout << "闲着没事, 吃点草" << endl;
}

void Sheep::speak()
{
    cout << "我叫:" << this->name << ", 我" << this->age << "岁了";
}

/**
 * 1. 定义类
 * 2. 定义对象
 * 3. 访问成员
 * 4. struct 和 class 的区别, 设计概念上的差别, 语言特性上的差别
 */
int main(int argc, char const *argv[])
{
    {
        Sheep a;
        Sheep *s = &a;
        // s.name 数组名, 使用时, 作为首地址使用( C语言规范逻辑 )
        // 赋值
        strcpy(s->name, "喜洋洋");
        s->SetAge(20);

        s->eat();
        s->speak();

        // s = nullptr;
    }

    cout << "程序准备退出" << endl;

    return 0;
}