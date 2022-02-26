#include <iostream>
using namespace std;

// define function that takes 4 integers as parameters 
// swaps first w second, and third w fourth values. 
// Then write main program that reads four integers from input, 
// calls function to swap the values, and prints on single line separated w spaces.

void swapVals(int& num1, int& num2, int& num3, int& num4){
    int x;          // placeholder variable

// swap 1 & 2
    x = num1;
    num1 = num2;
    num2 = x;

// swap 3 & 4
    x = num3;
    num3 = num4;
    num4 = x;
}



int main() {
   int num1;
   int num2;
   int num3;
   int num4;

// get inputs
   cin >> num1;
   cin >> num2;
   cin >> num3;
   cin >> num4;

// call swapVals
   swapVals(num1, num2, num3, num4);

// output
   cout << num1 << ' ';
   cout << num2 << ' ';
   cout << num3 << ' ';
   cout << num4 << endl;

   return 0;
}
