#include<iostream>
 using namespace std;
  
 int main()
 {
     int num;
      cout <<" Enter a number :";
      cin >> num;
      if (num > 0)
    {
        cout << "The entered number is positive." << endl;

        if (num % 2 == 0) {
            cout << "It is an Even Number ." << endl;
        } else {
            cout << "It is an Odd Number." << endl;
        }
    } else if (num < 0) {
        cout << "The number is Negative." << endl;
    } else {
        cout << "The number is Zero." << endl;
    }

    return 0;
    }