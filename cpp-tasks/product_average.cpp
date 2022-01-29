#include <iostream>
#include <iomanip>
using namespace std;

//part 1: given for int inputs; output product and average
//part 2: also output as floats (w 3 dec)

int main() {
//variables
   int n1;
   int n2;
   int n3;
   int n4;

   int p;               //product (int)
   int a;               //average (int)
   long long pl;        //product (long int)
   double pf;           //product (flaot)
   double af;           //average (float)

//inputs
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

//product & average (ints)
    p = (n1 * n2 * n3 * n4);
    a = (n1 + n2 + n3 + n4) / 4;

//product & average (floats)
    pl = n1 * n2;                 //floating point aritmetic (no overflow)
    pl = pl * n3;
    pl = pl * n4;
    pf = static_cast<double>(pl);
    af = static_cast<double>(n1 + n2 + n3 + n4) / 4;

//output
    cout << p << " " << a << endl;                      //output p & a (int)
    cout << fixed << setprecision(3);
    cout << pf << " " << af << endl;                    //output p & a (float)

   return 0;
}
