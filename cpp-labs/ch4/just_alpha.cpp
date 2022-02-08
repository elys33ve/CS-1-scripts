#include <iostream>
using namespace std;

// remove all non alpha characters from string input

int main() {
///
    string str1;            //string input
    string str2 = "";       //string output
    int i;
///
    getline(cin, str1);
///
    for (i=0; i<str1.length(); ++i){
        if (isalpha(str1.at(i))){
            str2.push_back(str1.at(i));
        }
    }
///
    cout << str2 << endl;

   return 0;
}
