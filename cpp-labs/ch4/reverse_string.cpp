#include <iostream>
#include <string>
using namespace std;

// input = string of text
// output = string in reverse
// keeps repeating until input = 'done', 'Done', or 'd'

int main() {
///
    bool done = false;
    string str1;     //input string
    string str2;     //output string
    int i;
///
    while(done == false){         //while not done
        getline(cin, str1);
        i = str1.length() - 1;
        if ((str1 == "Done")||(str1 == "done")||(str1 == "d")){       //if done
            done = true;
        }
        else{
            for (i; i>=0; i--){                                       //reverse for loop
                str2.push_back(str1.at(i));           //append string
            }
            str2 = str2 + "\n";                       //add newline
        }

    }
///
    cout << str2;

   return 0;
}
