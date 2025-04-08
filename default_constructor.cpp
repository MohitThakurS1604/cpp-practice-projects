/*

C++ program to demonstrate the use of default constructor

*/

#include <iostream>
using namespace std;

class MyClass {
public:
    int number;
 
    // default constructor
    MyClass() {
        number = 0;
    }
};

int main() {
    MyClass obj;
    cout << "Number: " << obj.number << endl;
    return 0;
}