#include <iostream>
using namespace std;

//inputs 3 ints, output smallest

int main() {
   int x;
   int y;
   int z;
   int min;

   cin >> x;
   cin >> y;
   cin >> z;

   if (x > y){          // if y lower
      min = y;
   }
   else if (x < y){     // if x lower
       min = x;
   } 
   else{                // if x and y equal
       min = x;
   }

   if (min > z){        // if z lower
       min = z;
   }

   cout << min << endl;

   return 0;
}
