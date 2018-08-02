/*-----------------------------------------------------------
This program prints the asterisks in the following format:
*
**
***
****
******
****
***
**
*
-----------------------------------------------------------*/
#include <iostream>
using namespace std;

int main()
{
  for (int r=0; r<5; r++) //for upper 5 rows
  {
    for (int c=0; c<=r; c++)
    {
      cout << "*";
    }
      cout << endl;
  }
  int no_of_row = 4, r, c;
  int no_of_col = no_of_row;
  for (r=0; r<no_of_row; r++) //for lower 4 rows
  {
    for (int c=0; c<no_of_col; c++)
    {
      cout << "*";
    }
      cout << endl;
      no_of_col--; //to make it decrement by 1
  }

  return 0;
}
