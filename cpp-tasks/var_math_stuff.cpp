#include <iostream>
#include <cmath>
using namespace std;

//given inputs: x, y, z
/*output:
x to the power of z
x to the power of (y to the power of z)
the abs value of y
the sqrt of (xy to the power of z)
*/

int main() {
//variables
   double x;
   double y;
   double z;

//inputs
   cin >> x;
   cin >> y;
   cin >> z;

//mathy variables
    double a1 = pow(x, z);
    double a2 = pow(x, pow(y, z));
    double a3 = fabs(y);
    double a4 = sqrt(pow((x * y), z));

//outputs
   cout << a1 << " ";
   cout << a2 << " ";
   cout << a3 << " ";
   cout << a4 << endl;

   return 0;
}
