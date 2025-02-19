/*

   C+++ program to check the age catagory 
   
*/
#include<iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 13) {
        cout << "You are a Child" << endl;
    }
    else if (age >= 13 && age <= 18) {
        cout << "You are in the growing stage" << endl;
    }
    else {
        cout << "You are an adult" << endl;
    }

    return 0;
}