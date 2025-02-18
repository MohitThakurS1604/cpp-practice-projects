#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num; // to store the input in num variable
    if (num > 0)
    {
        cout << "The entered number is positive." << endl;
    }
    else
    {
        cout << "The entered number is negative." << endl;
    }
}