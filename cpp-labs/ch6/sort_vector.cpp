#include <iostream>
#include <vector>
using namespace std;

// Define function named SortVector that takes vector of ints
// as parameter and modifies it by sorting elements in descending order. 
// main program reads a list of integers from input, 
// stores the integers in vector, calls SortVector() and outputs sorted result
// first input integer indicates how many numbers are in list

void SortVector(vector<int>& v){
    int s = v.size();           // number of ints in vector
    int x;                  // temp value for swap
    int i;
    int j;

// sort integers (highest to lowest) -- > (bubble sort)
    for (i=0; i<s; i++){
        for (j=0; j<s; j++){
            if (v.at(i) > v.at(j)){
                x = v.at(i);
                v.at(i) = v.at(j);
                v.at(j) = x;
            }
        }
    }
// outputs
    for (i=0; i<s; ++i){
        cout << v.at(i) << ',';
    }

    cout << endl;

}

int main() {
    vector<int> v;      // vector of int inputs
    int n;              // number of inputs
    int x;
    int i;

// get inputs
    cin >> n;

    for (i=0; i<n; ++i){
        cin >> x;
        v.push_back(x);
    }

// call function
    SortVector(v);


    return 0;
}
