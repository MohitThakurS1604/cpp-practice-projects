#include <iostream>
using namespace std;

int main()
{
    int num1, num2, remainder;
    cout << "Enter a number :";
    cin >> num1;
    cout << "Enter a number :";
    cin >> num2;
    remainder = num1 % num2;
    cout << "Remainder is : " << remainder << endl;
    return 0;
}