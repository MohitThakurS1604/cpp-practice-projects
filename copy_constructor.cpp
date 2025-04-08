/*

C++ program to demonstrate the use of copy constructor

*/

#include <iostream>
using namespace std;

class Box {
public:
    int size;

    // Parameterized constructor
    Box(int s) {
        size = s;
    }

    // Copy constructor
    Box(const Box &b) {
        size = b.size;
    }
};

int main() {
    Box box1(5);         // Original object
    Box box2 = box1;     // Copy using copy constructor

    cout << "Box1 size: " << box1.size << endl;
    cout << "Box2 size: " << box2.size << endl;

    return 0;
}