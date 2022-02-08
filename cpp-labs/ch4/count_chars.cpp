#include <iostream>
#include <string>
using namespace std;

// input character and string
// output number of times character appears in string

int main() {
///
    char ch;        //character
    string str;     //string
    int n = 0;      //number of characters
    int i;
///
    cin >> ch;               //first character
    getline(cin, str);      //rest of the string input

    str = str.substr(1, str.length());       //take out the space
///
    for (i=0; i<str.length(); ++i){
        if (ch == str.at(i)){
            n = n + 1;
        }
    }
///
    cout << n << " " << ch;

    if (!(n == 1)){
        cout << "'s";
    }
    
    cout << endl;

    return 0;
}
