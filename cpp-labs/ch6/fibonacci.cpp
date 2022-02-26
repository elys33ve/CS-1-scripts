#include <iostream>
using namespace std;


// The Fibonacci sequence. 
// (for loop, not recurrsion)
// Xn+2 = Xn+1 + Xn

int Fibonacci(int n) {
    int n1;
    int n2;
    int x;
    int i;

    if (n < 0){
        x = -1;
    }
    else{
        for (i=0; i<n+1; ++i){
            if (i == 0){
                x = 0;
            }
            else if (i == 1){
                n1 = x;
                x = 1;
            }
            else{
                n2 = x;
                x = x + n1;
                n1 = n2;
            }
        }
    }

    return x;
}

int main() {
    int n;
    
    cin >> n;
    cout << "Fibonacci(" << n << ") is " << Fibonacci(n) << endl;

    return 0;
}
