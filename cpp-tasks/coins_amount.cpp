#include <iostream>
#include <iomanip>
using namespace std;

//given inputs for number of coins/dollars, find total amount of money

int main() {
//variables
   double dol;      //dollars
   int qu;          //quarters
   int di;          //dimes
   int ni;          //nickles
   int pe;          //pennies

//inputs
   cin >> qu;
   cin >> di;
   cin >> ni;
   cin >> pe;

//calculate amount
    dol = (qu * 0.25) + (di * 0.10) + (ni * 0.05) + (pe * 0.01);

//output
   cout << fixed << setprecision(2);
   cout << "Amount: $" << dol << endl;

   return 0;
}
