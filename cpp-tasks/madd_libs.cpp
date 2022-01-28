#include <iostream>
#include <string>
using namespace std;

int main() {
    
  //variables
   string name;
   string location;
   int number;
   string pluralNoun;
  //inputs
   cin >> name;
   cin >> location;
   cin >> number;
   cin >> pluralNoun;
  //outputs
   cout << name << " went to " << location << " to buy " << number << " different types of " << pluralNoun << "." << endl;

   return 0;
}
