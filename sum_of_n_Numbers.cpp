/*

 Simple c++ program to find the sum of n numbers
 
 */

#include<iostream>
 using namespace std;

  int main()
  {

    int num;

    cout << "Enter a number :";
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        cout << i << " + ";

    }
    
    cout << num << " = " << num * (num + 1) / 2 << endl;
  }