#include <iostream>
#include <cstring>
using namespace std;

void addEx(char* txt) {
   int s = strlen(txt);
   int i;
   
   for (i=0; i<s; ++i){
      if (txt[i] == ' '){
         txt[i] = '!';
      }
   }

}

int main() {
   const int STR_SIZE = 50;
   char str[STR_SIZE];

   cin.getline(str, STR_SIZE);
   addEx(str);
   cout << str << endl;

   return 0;
}
