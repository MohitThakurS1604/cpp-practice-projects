#include <iostream>
using namespace std;

// Function with int parameter
void display(int a) {
    cout << "Integer value: " << a << endl;
}

// Function with double parameter
void display(double a) {
    cout << "Double value: " << a << endl;
}

// Function with string parameter
void display(string a) {
    cout << "String value: " << a << endl;
}

int main() {
    display(10);         // Calls the int version
    display(3.14);       // Calls the double version
    display("Hello");    // Calls the string version

    return 0;
}
