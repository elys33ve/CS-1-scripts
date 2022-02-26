#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> v;

   v = {1,2,3,4};

   int s = v.size();
   int i;
   
   for (i=s-1; i>=0; i--){
      v.push_back(v.at(i));
      v.erase(v.begin()+i);
   }

   for (i=0; i<s; ++i){
   cout << v.at(i) << endl;
   }

   return 0;
}
