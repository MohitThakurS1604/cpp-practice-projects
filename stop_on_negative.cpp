/*
C++ program to check positive number and if negative number is added then it will stop the program

*/

#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter positive numbers (enter a non-positive number to stop):\n";
    
    while (true) {
        cin >> num;
        
        if (num <= 0) {
            cout << "Non-positive number entered. Program terminated." << endl;
            break;
        }
    }
    
    return 0;
}
