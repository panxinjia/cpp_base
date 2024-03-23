#include <iostream>

using namespace std;

union Score {
    double value; // 8
    char level;   // 1
};

struct Student {
    char name[6]; // 6, padding 2
    int age;      // 4  padding 4
    Score sc;     // 8  => 24
};

 
int main(int argc, const char* argv[]) {
    cout << sizeof(Score) << endl;
    cout << sizeof(Student) << endl; 
    return 0;
}