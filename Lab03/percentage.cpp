// Lab 3 percentage.cpp
// This program will determine the percentage
// of answers a student got correct on a test.
// TAN HUNG KHAI

# include <iostream>  // INCLUDE THE FILE NEEDED TO DO I/O
# include <iomanip> // INCLUDE THE FILE NEEDED TO FORMAT OUTPUT
# include <string>  // INCLUDE THE FILE NEEDED TO USE STRINGS
using namespace std;

int main()
{
   string name;
   float numQuestions,
      numCorrect;
   double percentage;

   // Get student's test data
   cout << "Enter student's first and last name: ";
   getline (cin, name); // WRITE A STATEMENT TO READ THE WHOLE NAME INTO THE name VARIABLE.

   cout << "Number of questions on the test: ";
   cin  >> numQuestions;
   cout << "Number of answers the student got correct: ";
   cin  >> numCorrect;

   percentage = (numCorrect / numQuestions) * 100; // Compute and display the student's % correct
   cout << "(" << numCorrect << " / " << numQuestions << ") * 100% = " << fixed << setprecision(1) << percentage << "%" << endl;  // WRITE A STATEMENT TO COMPUTE THE % AND ASSIGN THE RESULT TO percentage.

   cout << name << setw(7) << fixed << setprecision(1) << percentage << "%" << endl;// WRITE STATEMENTS TO DISPLAY THE STUDENT'S NAME AND THEIR TEST
   // PERCENTAGE WITH ONE DECIMAL POINT.

   return 0;
}
