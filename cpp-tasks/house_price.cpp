#include <iostream>
using namespace std;

int main() {
//variables
   int cp;
   int lp;
   int em;
   int ch;
//inputs
   cin >> cp;
   cin >> lp;
//maths
   em = (cp * 0.051)/12;
   ch = cp - lp;
//outputs
   cout << "This house is $" << cp << ". The change is $" << ch << " since last month.\n";
   cout << "The estimated monthly mortgage is $" << em << ".\n";

   return 0;
}
