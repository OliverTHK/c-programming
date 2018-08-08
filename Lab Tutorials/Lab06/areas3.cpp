// Lab 4 areas.cpp
// Just another program
// and Me.
#include <iostream>
using namespace std;

void displayMenu();
void findSquareArea();
void findCircleArea();
void findTriangleArea();

const double PI = 3.14159;

int main()
{
   // DEFINE THE NAMED CONSTANT PI HERE AND SET ITS VALUE TO 3.14159


   // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE.
   int choice;


   do {

     displayMenu();
     // WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
     cin >> choice;

     // USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION
     // AND COMPUTE AND DISPLAY THE AREA FOR EACH VALID MENU CHOICE.
     // IF AN INVALID MENU CHOICE WAS ENTERED, AN ERROR MESSAGE SHOULD
     // BE DISPLAYED.

     if (choice == 1)
     {
       findSquareArea();
     }
     else if (choice == 2)
     {
       findCircleArea();
     }
     else if (choice == 3)
     {
       findTriangleArea();
     }
     else if (choice == 4)
     {
       break;
     }
     else
     {
       cout << "Invalid choice!\a" << endl;
       break;
     }

      // Blank lines
      cout << "\n\n\n\n\n\n";

  } while (choice != 4);

   return 0;
}

void displayMenu()
{
  // WRITE STATEMENTS HERE TO DISPLAY THE 4 MENU CHOICES.
  cout << "Program to calculate areas of objects\n"
          "    1 -- square\n"
          "    2 -- circle\n"
          "    3 -- right triangle\n"
          "    4 -- quit\n"
       << endl;
}

void findSquareArea()
{
  double length, area;
  cout << "Length of the square: ";
  cin >> length;
  area = length * length;
  cout << "Area: " << area << endl;
}

void findCircleArea()
{
  double radius, area;
  cout << "Radius of the circle: ";
  cin >> radius;
  area = PI * radius * radius;
  cout << "Area: " << area << endl;
}

void findTriangleArea()
{
  double base, height, area;
  cout << "Base of the right triangle: ";
  cin >> base;
  cout << "Height of the right triangle: ";
  cin >> height;
  area = base * height / 2.0;
  cout << "Area: " << area << endl;
}
