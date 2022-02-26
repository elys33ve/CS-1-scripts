#include <iostream>
#include <vector> 
#include <string>
#include <cctype>
using namespace std;

// Define function named GetWordFrequency 
// takes string vector and search word as parameters,
// then returns number of times search word in vector.
// main program reads list of words into vector, 
// calls function GetWordFrequency() repeatedly, 
// outputs words in vector with frequencies. 
// input begins with int for number of words that follow.

int GetWordFrequency(vector<string> list, string word){
    string x;               // temp string var
    char y;                 // temp char var
    int s = list.size();    // size of vector
    int freq = 0;           // number of times word in vector
    int i;
    int j;

// search word to lowercase
for (i=0; i<word.size(); ++i){
    word.at(i) = tolower(word.at(i));
}

// determine word frequency
    for (i=0; i<s; ++i){
        x = list.at(i);
        for (j=0; j<x.size(); ++j){     // convert str to lowercase
            x.at(j) = tolower(x.at(j));
        }        
        if (word == x){
            freq = freq + 1;            // incr freq for match
        }
    }

    return freq;
}

int main() {
    vector<string> list;     // list of input words
    string word;             // search word
    string x;                // temp placeholder
    int num;                 // number of words
    int i;

// get inputs
    cin >> num;

    for (i=0; i<num; ++i){
        cin >> x;
        list.push_back(x);
    }

// get frequency
    for (i=0; i<num; i++){
        int f = GetWordFrequency(list, list.at(i));
        cout << list.at(i);
        cout << ' ' << f << endl;
    }

    return 0;
}
