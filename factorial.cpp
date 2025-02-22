/*
*/

#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1;
    cout << "Enter a number: ";
    cin >> num;
    
    int i = num;
    while (i > 0) {
        factorial *= i;
        i--;
    }
    
    cout << "Factorial: " << factorial << endl;
    return 0;
}