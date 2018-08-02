// Lab 3 icecream.cpp
// WRITE A COMMENT BRIEFLY DESCRIBING THE PROGRAM.
// PUT YOUR NAME HERE.
// INCLUDE ANY NEEDED FILES HERE.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   // DEFINE NAMED CONSTANTS HERE TO HOLD THE PRICES OF THE 3
   // SIZES OF ICE CREAM CONES. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE.
   const float DeLIGHTful = 1.49;
   const float Double_DeLIGHT = 2.49;
   const float Triple_DeLIGHT = 3.49;

   // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE.
   float numDeLIGHTful, numDouble_DeLIGHT, numTriple_DeLIGHT;
   float sale_DeLIGHTful, sale_Double_DeLIGHT, sale_Triple_DeLIGHT;

   // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
   // THE PROGRAM NEEDS TO GET FROM THE USER.
   cout<<"Number of single scoop cones sold: ";
   cin>>numDeLIGHTful;
   cout<<"Number of double scoop cones sold: ";
   cin>>numDouble_DeLIGHT;
   cout<<"Number of triple scoop cones sold: ";
   cin>>numTriple_DeLIGHT;

   // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS
   // AND ASSIGN THE RESULTS TO VARIABLES.
   sale_DeLIGHTful = DeLIGHTful * numDeLIGHTful;
   sale_Double_DeLIGHT = Double_DeLIGHT * numDouble_DeLIGHT;
   sale_Triple_DeLIGHT = Triple_DeLIGHT * numTriple_DeLIGHT;

   // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
   cout<<left<<setw(24)<<"DeLIGHTful cones"<<right<<setw(3)<<numDeLIGHTful<<"  $"<<setw(7)<<fixed<<setprecision(2)<<sale_DeLIGHTful<<endl;
   cout<<left<<setw(24)<<"Double DeLIGHT cones"<<right<<setprecision(0)<<setw(3)<<numDouble_DeLIGHT<<"  $"<<setw(7)<<right<<fixed<<setprecision(2)<<sale_Double_DeLIGHT<<endl;
   cout<<left<<setw(24)<<"Triple DeLIGHT cones"<<right<<setprecision(0)<<setw(3)<<numTriple_DeLIGHT<<"  $"<<setw(7)<<right<<fixed<<setprecision(2)<<sale_Triple_DeLIGHT<<endl;
   cout<<left<<setw(24)<<"Total"<<right<<setprecision(0)<<setw(3)<<numDeLIGHTful+numDouble_DeLIGHT+numTriple_DeLIGHT<<"  $"<<setw(7)<<right<<fixed<<setprecision(2)<<sale_DeLIGHTful+sale_Double_DeLIGHT+sale_Triple_DeLIGHT<<endl;

   return 0;
}
