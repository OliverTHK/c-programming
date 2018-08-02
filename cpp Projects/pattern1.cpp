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
  int row, col;
  int no_of_row=5;
  for (row=1; row<=no_of_row; row++)
  {
    for (col=1; col<=row; col++)
    {
      cout << "*";
    }
      cout << endl;
  }

  return 0;
}
