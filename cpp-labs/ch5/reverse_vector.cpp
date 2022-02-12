#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

// input list of integers and output in reverse with comma between

int main() {
    vector<int> ints;   //user ints
    int n;              //number of values
    int i;

    cin >> n;       //get number of inputs
    ints.resize(n);

    for (i=0; i<n; ++i){        //get input values
        cin >> ints.at(i);
    }

    n = n - 1;

    for (i=n; i>=0; i--){               //print in reverse
        cout << ints.at(i) << ',';
    }

    cout << endl;

    return 0;
}
