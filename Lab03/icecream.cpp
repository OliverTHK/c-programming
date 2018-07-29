// Lab 3 icecream.cpp
// WRITE A COMMENT BRIEFLY DESCRIBING THE PROGRAM.
// TAN HUNG KHAI
// INCLUDE ANY NEEDED FILES HERE.
# include <iostream>
# include <iomanip>
using namespace std;

int main()
{
   // DEFINE NAMED CONSTANTS HERE TO HOLD THE PRICES OF THE 3
   const float DELIGHTFUL = 1.49,
               DOUBLE_DELIGHT = 2.49,
               TRIPLE_DELIGHT = 3.49;
   // SIZES OF ICE CREAM CONES. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE.

   // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
   int numSc, numDc, numTc, numTotal;
   float priceSc, priceDc, priceTc, priceTotal;
   // NAME AND AN APPROPRIATE DATA TYPE.

   // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
   cout << "Number of single scoop cones sold: ";
   // THE PROGRAM NEEDS TO GET FROM THE USER.
   cin >> numSc;

   cout << "Number of double scoop cones sold: ";
   cin >> numDc;

   cout << "Number of triple scoop cones sold: ";
   cin >> numTc;

   // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS
   numTotal = numSc+numDc+numTc;
   priceSc = DELIGHTFUL*numSc;
   priceDc = DOUBLE_DELIGHT*numDc;
   priceTc = TRIPLE_DELIGHT*numTc;
   priceTotal = priceSc+priceDc+priceTc;
   // AND ASSIGN THE RESULTS TO VARIABLES.

   // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
   cout << "\n\n" << left << setw(21) << "DeLIGHTful cones" << right << setw(7) << numSc << "   $" << right << setw(7) << fixed << setprecision(2) << priceSc << endl;
   cout << left << setw(21) << "Double DeLIGHT cones" << right << setw(7) << numDc << "   $" << right << setw(7) << fixed << setprecision(2) << priceDc << endl;
   cout << left << setw(21) << "Triple DeLIGHT cones" << right << setw(7) << numTc << "   $" << right << setw(7) << fixed << setprecision(2) << priceTc << endl;
   cout << left << setw(21) << "Total" << right << setw(7) << numTotal << "   $" << right << setw(7) << fixed << setprecision(2) << priceTotal << endl;
   return 0;
}
