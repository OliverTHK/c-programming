/*-----------------------------------------------------------
This program prints the asterisks in the following format:
     *
    * *
   * * *
  * * * *
* * * * * *
-----------------------------------------------------------*/
#include <iostream>
using namespace std;

int main()
{
  int row, colSpace, colStar, no_of_row=5;
  for (row=1; row<=no_of_row; row++)
  {
    for (colSpace=no_of_row-row; colSpace>=1; colSpace--) //colSpace=5-currentRow
    {
      cout << " ";
    }
    for (colStar=1; colStar<=row; colStar++)
    {
      cout << "* ";
    }
      cout << endl;
  }

  return 0;
}
