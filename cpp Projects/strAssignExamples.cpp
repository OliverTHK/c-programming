# include <iostream>
# include <string>
using namespace std;

int main ()
{
string str;
string base = "The quick brown fox jumps over a lazy dog.";

//used in the same order as described above:

str.assign (base);
cout << str << '\n';

str.assign (base, 10, 9);
cout << str << '\n';  //"brown fox"

str.assign ("pangrams are cool", 7);
cout << str << '\n';  //"pangram"

str.assign ("c-string");
cout << str << '\n';  //"c-string"

str.assign (10, '*');
cout << str << '\n';  //"**********"

str.assign <int> ("10, 0x2D");
cout << str << '\n';  //"----------"

str.assign (base.begin()+16, base.end()-12);
cout << str << '\n';  //"fox jumps over"
  return 0;
}
