#include <iostream>
#include <cmath>
using namespace std;

int main(){
//variables
    double G = 6.673e-11;   //gravitational constant
    double M = 5.98e24;     //mass of earth
    double accG;    //acceleration due to gravity
    double distC;   //distance from earth center

//input
    cout << "Distance from center:  ";
    cin >> distC;

//mathy stuff
    accG = (G * M) / pow(distC, 2);

//output
    cout << "\n" << accG << endl;

    return 0;
}
