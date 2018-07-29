// Lab 3 table.cpp
// This program reads data from a file and
// prints it in a nicely aligned table.
// TAN HUNG KHAI

# include <iostream>
# include <fstream>// INCLUDE THE FILE NEEDED TO USE FILES.
# include <iomanip>// INCLUDE THE FILE NEEDED TO FORMAT OUTPUT.
# include <string>// INCLUDE THE FILE NEEDED TO USE STRINGS.
using namespace std;

int main()
{
   string code,            // Item code of an inventory item
          description;     // Description of an inventory item
   int quantity;           // Quantity in stock of an inventory item

   ifstream dataIn;        // Define an input file stream object

   // WRITE A STATEMENT TO OPEN THE table.dat FILE THAT WILL BE
   // ACCESSED THROUGH THE dataIn FILE STREAM OBJECT.
   dataIn.open("table.dat", ifstream::in);

   // Print table heading
   cout << "     Warehouse Inventory      \n";
   cout << "==============================\n\n";
	 cout << "Item        Item          Item\n";
	 cout << "Code     Description       Qty\n\n";

   // Read in five data records and display them
   for(int i=0; i<5; i++)
   {
     dataIn >> code >> description >> quantity;        // Record 1
     cout   << left << setw(9) << code << setw(14) << description << right << setw(7) << quantity << endl;
   }
   // REPEAT THE ABOVE CODE FOR RECORDS 2 THROUGH 5.

   // Close the file
   // WRITE A STATEMENT TO CLOSE THE DATA FILE.

   return 0;
}
