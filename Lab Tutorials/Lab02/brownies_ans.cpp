#include <iostream>
using namespace std;

int main ()
{
  int length, width, SurfaceArea, SmallNumBrownies, BigNumBrownies;
  int SmallBrowniesSize = 1 * 1;
  int BigBrowniesSize = 2 * 2;

  cout << "Enter value for length: ";
  cin >> length;
  cout << "Enter value for width: ";
  cin >> width;
  SurfaceArea = length * width;
  SmallNumBrownies = SurfaceArea / SmallBrowniesSize;
  //cout << "Number of small brownies: " << SmallNumBrownies << endl;
  BigNumBrownies = SurfaceArea / BigBrowniesSize;
  //cout << "Number of big brownies: " << BigNumBrownies << endl;
  cout << "A " << length << " X " << width << " inch pan can hold " << SmallNumBrownies << " small brownies or " << BigNumBrownies << " large brownies.";

  return 0;
}
