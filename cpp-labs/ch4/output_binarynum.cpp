#include <iostream>
using namespace std;

// pos int as input, output string of 1s and 0s representing integer in reverse binary
// for int x:  (while x>0)
//          x % 2 , x = x/2

int main() {
///
    int x;      //input
    int y;      //output
///
    cin >> x;
///
    while (x > 0){
        y = x % 2;
        cout << y;
        x = x / 2;
    }
///
    cout << endl;

    return 0;
}
