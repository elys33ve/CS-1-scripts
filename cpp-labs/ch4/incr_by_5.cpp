#include <iostream>
using namespace std;

// input = 2 integers, output = increments of 5 from 1st int, 
// until value is greater than 2nd integer

int main() {
///
    int x;          //first int
    int y;          //second int
///
    cin >> x;
    cin >> y;
///
    if (y < x){
        cout << "Second integer can't be less than the first.\n";
    }
///
    else{
        while (x <= y){
            cout << x << " ";
            x = x + 5;
        }
        cout << endl;
    }

    return 0;
}
