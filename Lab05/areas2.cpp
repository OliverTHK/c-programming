// Lab 4 areas.cpp
// Just another program
// and Me.
#include <iostream>
using namespace std;

int main()
{
   // DEFINE THE NAMED CONSTANT PI HERE AND SET ITS VALUE TO 3.14159
   double const PI = 3.14159;

   // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE.
   int choice;

   // WRITE STATEMENTS HERE TO DISPLAY THE 4 MENU CHOICES.
   do
   {
   cout << "Program to calculate areas of objects\n"
           "    1 -- square\n"
           "    2 -- circle\n"
           "    3 -- right triangle\n"
           "    4 -- quit\n"
        << endl;

   // WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
   cin >> choice;
   // USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION
   // AND COMPUTE AND DISPLAY THE AREA FOR EACH VALID MENU CHOICE.
   // IF AN INVALID MENU CHOICE WAS ENTERED, AN ERROR MESSAGE SHOULD
   // BE DISPLAYED.
   double area;
   bool showArea = true;
   if (choice == 1)
   {
     double length;
     cout << "Length of the square: ";
     cin >> length;
     area = length * length;
   }
   else if (choice == 2)
   {
     double radius;
     cout << "Radius of the circle: ";
     cin >> radius;
     area = PI * radius * radius;
   }
   else if (choice == 3)
   {
     double base, height;
     cout << "Base of the right triangle: ";
     cin >> base;
     cout << "Height of the right triangle: ";
     cin >> height;
     area = base * height / 2.0;
   }
   else if (choice == 4)
   {
     return 0;
   }
   else
   {
     showArea = false;
     cout << "Invalid choice!\a" << endl;
   }
   if (showArea)
      cout << "Area: " << area << endl;
   } while(choice != 4);
   return 0;
}
