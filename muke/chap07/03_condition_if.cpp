#include <iostream>

using namespace std;

typedef enum _color {
    RED,
    GREEN,
    BLUE,
    UNKOWN
} color; 


int main(int argc, char const *argv[])
{
    color c;
    c = UNKOWN;
    if ( c == RED) {
        cout << "red" << endl; 
    } else if (c == GREEN) {
        cout << "green" << endl;
    } else if (c == BLUE) {
        cout << "blue" << endl; 
    } else {
        cout << "unkown" << endl; 
    }
    return 0;
}
