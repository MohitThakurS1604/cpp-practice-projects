/*

   C+++ program to divide two numbers
   
*/
#include <iostream>

using namespace std;

int main()
{
    int num1, num2, divide;

    cout << "Enter a number :";
    cin >> num1;

    cout << "Enter a number :";
    cin >> num2;

    divide = num1 / num2;

    cout << "Division is :" << divide << endl;
    return 0;
}