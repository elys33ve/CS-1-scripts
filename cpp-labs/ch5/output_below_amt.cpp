#include <iostream>
#include <vector>
using namespace std;

// first input = amount of values
// input values to vector
// last input after vector = max value output

int main() {
    vector<int> v;      //vector of input ints
    int n;              //amount of values
    int max;            //max val for outputs
    int input;          //user input value
    int i;

    cin >> n;                   //num of vals

    for (i=0; i<n; ++i){            //get vals
        cin >> input;
        v.push_back(input);
    }

    cin >> max;                 //max val

    for (i=0; i<n; ++i){
        if (v.at(i) < max){                 //output if below max
            cout << v.at(i) << ",";
        }
    }

    cout << endl;

    return 0;
}
