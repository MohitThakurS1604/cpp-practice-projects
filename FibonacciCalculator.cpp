/*

C++ program to wrote fibonaacci numbers using functions 

*/

#include <iostream>
using namespace std;

// Function to generate Fibonacci series up to n terms
void fibonacci(int n) {
    int first = 0, second = 1, next;
    
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        fibonacci(n);
    }
    
    return 0;
}
