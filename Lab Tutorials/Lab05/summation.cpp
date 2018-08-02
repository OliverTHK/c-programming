// Lab 5 - summation.cpp
// This program displays a series of terms and computes its sum.
// Oliver Tan.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int denom,           	// Denominator of a particular term
       finalDenom, nterm;    // Denominator of the final term
	double sum = 0.0;		   // Accumulator that adds up all terms in the series
	char choice;
	do
	{
	 cout << "This program sums the series 1/2^1 + 1/2^2 + 1/2^3 + . . . + 1/2^n\n";
	 cout << "What should n be in the final term (2 - 10)?";
	 cin >> nterm;

   // WRITE THE CODE TO START A FOR LOOP THAT LOOPS ONCE FOR EACH TERM.
   // I.E., FOR TERMS WITH DENOMINATORS FROM 2 TO THE FINAL DENOMINATOR.
	 denom = 1;
	 for (int power = 1; power<=nterm; power++)
	{
		denom*=2;
		// WRITE THE CODE TO PRINT THIS TERM.
		// IF IT IS NOT THE LAST TERM, FOLLOW IT WITH A +.
      // IF IT IS THE LAST TERM, FOLLOW IT WITH A =.
      cout << "1/" << denom;
			if (power != nterm)
				cout << "+";
			else
				cout << "=";
      // WRITE THE CODE TO ADD THE VALUE OF THIS TERM TO THE ACCUMULATOR.
			sum += 1.0/denom;
	 }
		cout << sum << endl;
	// WRITE A LINE OF CODE TO PRINT THE SUM.
		sum = 0;
		cout << "Repeat? ('y' or 'Y' for YES, other characters for NO)" << endl;
		cin >> choice;
		choice = tolower(choice);
	} while (choice == 'y');
	return 0;
}
