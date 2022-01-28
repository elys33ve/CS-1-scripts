#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
//variables
    double vol;
    double r;

//inputs
    cout << "Radius of sphere:  ";
    cin >> r;
    
//stuff
    vol = (4.0 / 3.0) * M_PI * pow(r, 3.0);

//outputs
    cout << fixed << setprecision(2) << vol << endl;

    return 0;
}
