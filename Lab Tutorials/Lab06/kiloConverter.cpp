// Lab 6 kiloConverter.cpp
// This menu-driven program lets the user convert
// pounds to kilograms and kilograms to pounds.
// Oliver Tan
#include <iostream>
using namespace std;

// Function prototypes
// WRITE PROTOTYPES FOR THE displayMenu, getChoice,
// kilosToPounds and poundsToKilos FUNCTIONS HERE.
void displayMenu();
int getChoice(int, int);
double kilosToPounds(double);
double poundsToKilos(double);

int choice;
/*****     main     *****/
int main()
{
   // DECLARE ANY VARIABLES MAIN USES HERE.
   double weight;

   // WRITE THE CODE HERE TO CARRY OUT THE STEPS
   // REQUIRED BY THE PROGRAM SPECIFICATIONS.
   do
   {
     displayMenu();
     getChoice(1, 3);
     if (choice == 1)
     {
       cout << "Weight to be converted: ";
       cin >> weight;
       cout << weight << " kilograms = " << kilosToPounds(weight) << " pounds." << endl << endl;
     }
     else if (choice == 2)
     {
       cout << "Weight to be converted: ";
       cin >> weight;
       cout << weight << " pounds = " << poundsToKilos(weight) << " kilograms." << endl << endl;
     }
     else if (choice == 3)
     {
       return 0;
     }
   } while(choice == 1 || choice == 2);
   return 0;
}

/*****     displayMenu     *****/
void displayMenu()
// WRITE THE displayMenu FUNCTION HERE.
{
  cout << "*** Menu Choices ***" << endl;
  cout << "1. Convert kilograms to pounds" << endl;
  cout << "2. Convert pounds to kilograms" << endl;
  cout << "3. Quit" << endl;
}
// THIS void FUNCTION DISPLAYS THE MENU CHOICES
//  1. Convert kilograms to pounds
//  2. Convert pounds to kilograms
//  3. Quit

/*****     getChoice     *****/
int getChoice(int min, int max)
{
   int input;
   // Get and validate the input
   cin >> input;
   choice = input;
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
      choice = input;
   }
   return choice;
}
// THIS IS THE SAME FUNCTION YOU WROTE EARLIER IN THIS SET
// OF LAB EXERCISES. JUST FIND IT AND PASTE IT HERE.

/*****     kilosToPounds     *****/
double kilosToPounds(double a)
// WRITE THE kilosToPounds FUNCTION HERE.
{
  return a * 2.2;
}
// IT RECEIVES A WEIGHT IN KILOS AND MUST CALCULATE
// AND RETURN THE EQUIVALENT NUMBER OF POUNDS.

/*****    poundsToKilos     *****/
double poundsToKilos(double b)
// WRITE THE poundsToKilos FUNCTION HERE.
{
  return b / 2.2;
}
// IT RECEIVES A WEIGHT IN POUNDS AND MUST CALCULATE
// AND RETURN THE EQUIVALENT NUMBER OF KILOS.
