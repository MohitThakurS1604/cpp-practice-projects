/*

C++ program to demonstrate the use of friend function

*/

#include <iostream>
using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass(int val) : data(val) {}

    // Declaring friend function
    friend void display(const MyClass& obj);
};

// Friend function definition (outside the class)
void display(const MyClass& obj) {
    cout << "Data: " << obj.data << endl;  // Accessing private member
}

int main() {
    MyClass obj(10);
    display(obj);  // Calling the  friend function

    return 0;
}
