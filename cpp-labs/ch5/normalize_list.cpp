#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// adjust values by dividing by largest value
// first input = number of inputs for vector
// 

int main() {
    vector<double> vals;            //list of values
    double max;                     //max value
    double input;                   //user input value
    int n;                          //number of value inputs
    int i;
///
    cin >> n;

    for (i=0; i<n; ++i){            //get values
        cin >> input;
        vals.push_back(input);
    }
///
    max = vals.at(0);                       //set max to first value

    for (i=0; i<n; ++i){            //find max value
        if (vals.at(i) > max){
            max = vals.at(i);
        }
    }
///
    cout << fixed << setprecision(2);

    for (i=0; i<n; ++i){            //divide vals by max + output vals
        vals.at(i) = vals.at(i) / max;
        cout << vals.at(i) << " ";
    }

    cout << endl;

    return 0;
}
