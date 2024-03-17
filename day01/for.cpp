#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    // 范围for 遍历一个序列
    int arr[]{12, 22, 13, 98, 45, 87};
    for (auto v: arr) {             // 多了一个拷贝动作
        cout << v << endl;
    }

    cout << "---->" << endl; 
    for (auto v : {1,2,3,4}) {      // 多了一个拷贝动作
        cout << v << endl; 
    }
    cout << "---->" << endl; 
    for (auto& v : {'a', 'b', 'c'}) { // 引用, 没有拷贝动作
        cout << v << endl; 
    }
    return 0;
}
