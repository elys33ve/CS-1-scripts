#include <iostream>
using namespace std;

//create/output right facing arrow
int main() {
   int b;  //base char
   int h;  //head char

   cin >> b;
   cin >> h;

   cout << "     " << h << endl;
   cout << "     " << h << h << endl;
   cout << b << b << b << b << b << h << h << h << endl;
   cout << b << b << b << b << b << h << h << h << h << endl;
   cout << b << b << b << b << b << h << h << h << endl;
   cout << "     " << h << h << endl;
   cout << "     " << h << endl;

   return 0;
}

/* for 0 and 1

     1
     11
00000111
000001111
00000111
     11
     1

*/
