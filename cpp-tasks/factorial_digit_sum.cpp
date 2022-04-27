#include <iostream>
#include <string>
using namespace std;


int factorial_digit_sum(int x){
   string number;
   int fac = 1;
   int sum = 0;
   int i;

   for (i=1;i<=x;i++){
      fac *= i;
   }

   number = to_string(fac);

   
   for (i=0;i<number.length()-1;i++){
      sum += int(number.at(i) - '0');
   }

   return sum;
}


int main(){
   
   cout << factorial_digit_sum(5) << endl;

   return 0;
}
