#include <iostream>
#include <string>
using namespace std;

// year = 365 days, leap year = 366 days
/* requirements for leap year:
        divisible by 4
        if century year; divisible by 400   */
// program takes year as input; determines if leap year

int main() {
//variables
        //int & bool
    int yr;                  //input year
        //strings (outputs)
    string isly = " - leap year\n";                //is leap year
    string notly = " - not a leap year\n";         //not leap year

//input
    cin >> yr;

//conditionals
    if ((yr % 100) == 0){           //century years
        if ((yr % 400) == 0){
            cout << yr << isly;             //output leap year
        }
        else{
            cout << yr << notly;            //output not leap year
        }
    }
    else{
        if ((yr % 4) == 0){
            cout << yr << isly;             //output leap year
        }
        else{
            cout << yr << notly;            //output not leap year
        }
    }

    return 0;
}
