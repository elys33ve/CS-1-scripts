#include <iostream>
using namespace std;

int main() {
   int cp;
   int lp;
   int em;
   int ch;
   
   cin >> cp;
   cin >> lp;

   em = (cp * 0.051)/12;
   ch = cp - lp;

   cout << "This house is $" << cp << ". The change is $" << ch << " since last month.\n";
   cout << "The estimated monthly mortgage is $" << em << ".\n";

   return 0;
}
