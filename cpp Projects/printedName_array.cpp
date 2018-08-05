#include <iostream>
using namespace std;

int main()
{
  //Must use [6][6]for adequate space. to store all the characters for both lines.
  //Because maximum characters for 1st line is 6 characters.
  char myName[6][6] = {{'O','L','I','V','E','R'},{'T','A','N'}};

  //Array index starts from 0.
  //[0] specifies 1st row; [4] specifies 5th row, which is 5th character
  //'E' is changed to 'A'
  myName[0][4] = 'A';
  //'j' is used for row
  for (int j=0; j<2; j++)
  {
    //'k' is used for column
    for (int k=0; k<6; k++)
    {
      cout << myName[j][k];
    }
      //Only if the above condition satisfied, then go to next line.
      cout << endl;
  }

  return 0;
}
