#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> v(0);    //vector
   int i = 0;           //input

   while (!(i == -1)){
      cin >> i;
      v.push_back(i);
   }

   v.pop_back();

   for (i=0; i<v.size(); ++i){
      v.at(i) = (v.back() - v.at(i)) * (-1);
      cout << v.at(i) << endl;
   }

   return 0;
}
