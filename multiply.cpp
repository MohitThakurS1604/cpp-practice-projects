/*

   C+++ program to multiply two numbers
   
*/

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, multiply;

    cout << "Enter a number :";
    cin >> num1;
    cout << "Enter a number :";
    cin >> num2;

    multiply = num1 * num2;

    cout << "Product is : " << multiply << endl;
    return 0;
}