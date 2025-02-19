/*

   C+++ program to check if the entered integer is positive or negative
   
*/

#include<iostream>
  using namespace std;

  int main()
  {
     int num;
    cout << "Enter an Integer : ";
    cin >> num;
     
    if (num > 0)
    {
        cout << "The entered integer is positive." << endl;
    }
    else if (num < 0)
    {
        cout << "The entered integer is negative." << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
    return 0;
  }
  