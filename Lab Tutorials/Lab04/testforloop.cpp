// Lab 4 color.cpp
// This program lets the user select a primary color from a menu. 
// Oliver Tan
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int choice;    // Menu choice should be 1, 2, or 3
   
   // Display the menu of choices
   cout << "Choose a primary color by entering its number. \n\n";
   cout << "1 Red \n" << "2 Blue \n" << "3 Yellow \n";
   
   // Get the user's choice
   cin >> choice;
   
   // Tell the user what he or she picked
   while (choice >= 0)
   {
   if (choice == 1)
   { 
      cout << "\nYou picked red.\n";
	break;
   }
   else if (choice == 2)
   {   
      cout << "\nYou picked blue.\n";
	break;
   }
   else if (choice == 3)
   {
      cout << "\nYou picked yellow.\n";
	break;
   }
   else
   {
	   cout << "\nInvalid choice. Please choose again." << endl;
	   cin >> choice;
   }
   }
   return 0;
}
   