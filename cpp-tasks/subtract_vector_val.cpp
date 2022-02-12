#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> v(0);    // vector
   int i = 0;           // input/iteration

   while (!(i == -1)){      // until input is -1
      cin >> i;
      v.push_back(i);
   }

   v.pop_back();            // remove -1

   for (i=0; i<v.size(); ++i){
      v.at(i) = v.back() - v.at(i);     // subtract vector value from last value
      cout << v.at(i) << endl;
   }

   return 0;
}
