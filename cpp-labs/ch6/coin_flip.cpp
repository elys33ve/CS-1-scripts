#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

// coin flip
// define a function that returns "Heads" or "Tails" 
// for random value 1 or 0. (1=heads, 0=tails)
// write a main program w number of coin flips as input
// calls function repeatedly according to the number of coin flips

string coin_flip(int x){
    string face;            // coin face (heads or tails)

// determine coin face
    if (x == 1){
        face = "Heads";
    }
    else{
        face = "Tails";
    }

    return face;
}

int main() {
    srand(time(0));         // pseudo-random number seed
    string face;            // coin face (heads or tails)
    int num;                // number of coin flips
    int x;                  // random number (1 or 0)
    int i;

// get input
    cin >> num;

// output
    for(i=0; i<num; i++){
        x = rand() % 2;
        face = coin_flip(x);
        cout << face << endl;
    }

    return 0;
}
