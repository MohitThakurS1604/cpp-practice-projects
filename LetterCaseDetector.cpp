/*

C++ program to check that the entered number is uppercase or lowercase

  */

#include "iostream"
using namespace std;

int main()
{
  char input;

  cout << "Emter any character : " << endl;
  cin >> input;

  if (input >= 'a' && input <= 'z')
  {
    cout << "The entered character is a lowercase character " << endl;
  }
  else
  {

    cout << "The entered character is a uppercase character " << endl;
  }
}