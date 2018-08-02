/*This program displays the user's name surrounded by stars.
It uses the + operator and several string class member functions. */
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string firstName, lastName, fullName;
  string stars;
  int numStars;

  cout << "Please enter your first name: ";
  getline(cin, firstName);

  cout << "Please enter your last name: ";
  getline(cin, lastName);

  fullName = firstName + " " + lastName;

  numStars = fullName.length();
  stars.assign(numStars, '*');

  cout << endl;
  cout << stars   << endl;
  cout << fullName << endl;
  cout << stars << endl;

  return 0;
}

/*

Please enter you first name: AAA BBB
Please enter you last name: ZZZ

***********
AAA BBB ZZZ
***********

*/
