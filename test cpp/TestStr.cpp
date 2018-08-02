# include <iostream>
# include <string>
using namespace std;

int main ()
{
string str;
string base = "The quick brown fox jumps over the lazy dog.";

str.assign <char> (10, 0x2D);
cout << str << endl;

  return 0;
}
