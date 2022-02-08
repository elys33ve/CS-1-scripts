#include <iostream>
#include <iomanip>
using namespace std;

// take input of any number of non-negative ints, outputs max and average
// a negative number ends the input and isn't included


int main() {
///
    int num;
    int max;
    int n = 1;
    double average;
///
    cin >> num;
///
    average  = num;
    max = num;

    while (num >= 0){
        cin >> num;
        if (num > max){
                max = num;
        }
        if (num < 0){
            break;
        }
        average = average + num;
        n = n + 1;
        
    }
    
    average = average / n;
///
    cout << fixed << setprecision(2);
    cout << max << " " << average << endl;

    return 0;
}
