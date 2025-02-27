/*

C++ program that finds square root of numbers using function

*/

#include <iostream>

 using namespace std;

// Function to find square root of a number

void findSquareRoot(double num) {

    cout << "Square root of " << num << " is " << sqrt(num) << endl;

}

  int main() {

    double num;

    cout << "Enter a number: ";
    cin >> num;

    findSquareRoot(num);

    return 0;
  }