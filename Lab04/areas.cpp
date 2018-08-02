// Lab 4 areas.cpp 
// WRITE A COMMENT BRIEFLY DESCRIBING THE PROGRAM.
// Oliver Tan
// INCLUDE ANY NEEDED FILES HERE.
#include <iostream>
#include <string>
using namespace std;

int main()
{
   // DEFINE THE NAMED CONSTANT PI HERE AND SET ITS VALUE TO 3.14159
   const double PI = 3.14159;

   // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE

   // NAME AND AN APPROPRIATE DATA TYPE.
   int choice;
   double area;
   bool showArea = true;
   // WRITE STATEMENTS HERE TO DISPLAY THE 4 MENU CHOICES.
   cout << "Program to calculate areas of objects" << endl;
   // WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
   cout << "1 -- square\n"
		<< "2 -- circle\n"
		<< "3 -- right triangle\n"
		<< "4 -- quit" << endl;
   cin >> choice;
   // USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION
   // AND COMPUTE AND DISPLAY THE AREA FOR EACH VALID MENU CHOICE.
   // IF AN INVALID MENU CHOICE WAS ENTERED, AN ERROR MESSAGE SHOULD
   // BE DISPLAYED.
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
		 cout << "Base of the triangle: ";
		 cin >> base;
		 cout << "Height of the triangle: ";
		 cin >> height;
		 area = 0.5 * base * height;
	 }
	 else if (choice == 4)
	 {
		 return 0;
	 }
	 else
	 {
		 cout << "Invalid choice!\a" << endl;
		 showArea = false;
	 }
	 if (showArea)
	 {
		 cout << "Area: " << area << endl;
	 }

   return 0;
}
