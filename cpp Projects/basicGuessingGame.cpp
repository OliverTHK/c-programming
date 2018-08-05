/*This program will only stops when user successfully input 4. It uses
do...while loop for this operation. */
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string numGuessed;
  int intNumGuessed = 0;

  do
  {
    cout << "Guess a value between 1 and 10: ";
    getline(cin, numGuessed);
    //Convert numGuessed from string to integer type by using "stoi()".
    //"stod()" is used to convert string to double.
    intNumGuessed = stoi(numGuessed);
    cout << intNumGuessed << endl;
  } while(intNumGuessed != 4);

  cout << "You win!" << endl;
  return 0;
}
