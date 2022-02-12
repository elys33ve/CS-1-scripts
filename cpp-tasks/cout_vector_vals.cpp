#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   vector<int> cg(NUM_VALS);
   int i;

   for (i = 0; i < cg.size(); ++i) {          // get input vals
      cin >> cg.at(i);
   }

   for (i = 0; i < cg.size(); ++i){           // print vector values
       cout << cg.at(i) << " ";
   }

   cout << endl;

   for (i = cg.size() - 1; i >= 0; i--){      // print vector vals reverse
       cout << cg.at(i) << " ";
   }

   cout << endl;

   return 0;
}
