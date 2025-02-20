/*

 C++ program to print abc in the console

*/

#include<iostream>

using namespace std;

      int main()
      {

        char input;

        cout << "Enter any characher :" << endl;
        cin >> input;

        if (input == 'a' || input == 'b' || input == 'c')
        {
            for (char c = input; c <= 'z'; c++) {
                cout << c << endl;
            }
        
        }
         else
         {
            cout << "Invalid input " << endl << "Please entre a valid input ";
        
         }
         return 0;
      }