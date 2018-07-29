// brownies.cpp
// WRITE A COMMENT BRIEFLY DESCRIBING THE PROGRAM.
// TITLE: Brownies Program
// TAN HUNG KHAI
#include <iostream> // INCLUDE THE FILE NEEDED TO DO I/O
using namespace std;

int main()
{
   int length = 0, width = 0, surface_area, s_brownies, l_brownies; // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE.

   cout << "Enter the length of the baking pan: "; // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
   cin >> length; // THE PROGRAM NEEDS TO GET FROM THE USER.

   cout << "Enter the width of the baking pan: ";
   cin >> width;

   surface_area = length * width; // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS
   s_brownies = surface_area * 1;
   l_brownies = surface_area / 4;
   // AND ASSIGN THE RESULTS TO VARIABLES.

   cout << "\nA " << length << " X " << width << " pan can hold " << s_brownies << " small brownies or " << l_brownies << " large brownies.\n"; // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
   cout << "\nThank you for using this program.\n";

   return 0;
}
