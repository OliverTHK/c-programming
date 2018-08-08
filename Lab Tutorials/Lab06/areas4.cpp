// Lab 4 areas.cpp
// Just another program
// and Me.
#include <iostream>
using namespace std;

void displayMenu();
int getChoice(int, int);
double findSquareArea();
double findCircleArea();
double findTriangleArea();

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
     choice = getChoice(1, 4);

     // USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION
     // AND COMPUTE AND DISPLAY THE AREA FOR EACH VALID MENU CHOICE.
     // IF AN INVALID MENU CHOICE WAS ENTERED, AN ERROR MESSAGE SHOULD
     // BE DISPLAYED.

     if (choice == 1)
     {
       cout << "Area: " << findSquareArea() << endl;
     }
     else if (choice == 2)
     {
       cout << "Area: " << findCircleArea() << endl;
     }
     else if (choice == 3)
     {
       cout << "Area: " << findTriangleArea() << endl;
     }
     else if (choice == 4)
     {
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

int getChoice(int min, int max)
{
   int input;

   // Get and validate the input
   cin >> input;
   while (input < min || input > max)
   {  cout << "Invalid input. Enter an integer between 1 and 4: ";
      cin  >> input;
      while (cin.fail())
      {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Invalid input. Enter ONLY an INTEGER between 1 and 4: ";
        cin >> input;
      }
   }
   return input;
}

double findSquareArea()
{
  double length, area;
  cout << "Length of the square: ";
  cin >> length;
  area = length * length;
  return area;
}

double findCircleArea()
{
  double radius, area;
  cout << "Radius of the circle: ";
  cin >> radius;
  area = PI * radius * radius;
  return area;
}

double findTriangleArea()
{
  double base, height, area;
  cout << "Base of the right triangle: ";
  cin >> base;
  cout << "Height of the right triangle: ";
  cin >> height;
  area = base * height / 2.0;
  return area;
}
