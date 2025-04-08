/*

C++ program to demonstrate function overloading with different number of parameters 

*/

#include <iostream>
using namespace std;

// Function with 1 parameter
void show(int x) {
    cout << "Value: " << x << endl;
}

// Function with 2 parameters
void show(int x, int y) {
    cout << "Sum: " << x + y << endl;
}

// Function with 3 parameters
void show(int x, int y, int z) {
    cout << "Product: " << x * y * z << endl;
}

int main() {
    show(5);             // Calls function with 1 parameter
    show(3, 4);          // Calls function with 2 parameters
    show(2, 3, 4);       // Calls function with 3 parameters

    return 0;
}
