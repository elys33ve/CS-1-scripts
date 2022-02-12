#include <iostream>
#include <string>
#include <vector>
using namespace std;

// first input = number of string inputs
// get string inputs
// last input = character
// output every word in list that contains char at least once
// separate output words w comma, assume at least one word contains char

int main() {
///
    vector<string> words;       //word inputs
    vector<bool> out;           //contain character (yes this could be done shorter without this but i like lists)
    string input;               //string input
    char ch;                    //character input
    int n1;                     //number of inputs
    int n2;                     //number of characters in str
    int i;
    int j;
///     get inputs
    cin >> n1;

    for (i=0; i<n1; ++i){
        cin >> input;
        words.push_back(input);
    }

    cin >> ch;
    
///     compare char
    out.resize(n1);     //set bool list size to word list size

    for (i=0; i<n1; ++i){       //for each word in vector
        input = words.at(i);
        n2 = input.length();
        out.at(i) = false;
        for (j=0; j<n2; ++j){       //for each char in word
            if (input.at(j) == ch){
                out.at(i) = true;       //set corresponding bool to true for char match
            }
        }
    }
///     ouputs
    for (i=0; i<n1; ++i){
        if (out.at(i) == true){                 //output word if contains char
            cout << words.at(i) << ",";             //(cooresponding boolean in out vector = true)
        }
    }

    cout << endl;

    return 0;
}
