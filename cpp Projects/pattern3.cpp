/*-----------------------------------------------------------
This program prints the asterisks in the following format:
     *
    **
   ***
  ****
******
-----------------------------------------------------------*/
#include <iostream>
using namespace std;

int main()
{
  int row, col1, col2;
  int no_of_row=5, no_of_col=no_of_row-1;
  for (row=1; row<=no_of_row; row++) //Loop for Row
  {
    for (col1=1; col1<=no_of_col; col1++) //Loop for Column on " "
    {
      cout << " ";
    }
      no_of_col--;
    for (col2=1; col2<=row;col2++) //Loop for Column on "*"
    //this function is same as pattern1.cpp
    {
      cout << "*";
    }
      cout << endl;
  }

  return 0;
}
