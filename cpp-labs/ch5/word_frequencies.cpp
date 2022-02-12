#include <iostream>
#include <vector>
#include <string>
using namespace std;

// input number of word inputs
// input string inputs to vector
// output words and their frequencies
// assume less than 20 words

int main() {    
///
    vector<int> freq;           //frequencies
    vector<string> words;       //words
    string input;               //string input
    int fr;                     //frequency of word/num times word appears in list
    int n;                      //number of word inputs
    int i; 
    int j;
///     get inputs
    cin >> n;

    for (i=0; i<n; ++i){            //get inputs
        cin >> input;
        words.push_back(input);
    }
///     get frequencies
    freq.resize(n);

    for (i=0; i<n; ++i){
        fr = 0;                                     //set freq to 0 for word i
        for (j=0; j<n; ++j){
            if (words.at(i) == words.at(j)){        //if word matches, incr freq
                fr = fr + 1;
            }
        }
        freq.at(i) = fr;                            //add word freq to corresponding item in freq
    }
///     outputs
    for (i=0; i<n; ++i){
        cout << words.at(i) << " - ";
        cout << freq.at(i) << endl;
    }

    return 0;
}
