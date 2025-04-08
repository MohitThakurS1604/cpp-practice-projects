/*

C++ program to demonstrate the use of parameterized constructor

*/

#include <iostream>
using namespace std;

class Number {
public:
    int value;

    // parameterized constructor
    Number(int v) {
        value = v;
    }
};

int main() {
    Number num(10);
    cout << "Value: " << num.value << endl;
    return 0;
}