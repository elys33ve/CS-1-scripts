#include <iostream>
using namespace std;

// convert kg to lbs
// 1 kilogram = 2.204 pounds

double KiloToPounds(double kilos) {
   double pounds;

   pounds = kilos * 2.204;

   return pounds;
}

int main() {
   double kilos;
   double pounds;
   
   cin >> kilos;
   
   pounds = KiloToPounds(kilos);
   cout << pounds << " lbs" << endl;
   
   return 0;
}
