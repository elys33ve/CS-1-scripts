#include <iostream>
#include <string>
using namespace std;

// total change as int input, output change using fewest coins (1 coin type per line)
// coin types: dollars, quarters, dimes, nickels, and pennies (use singular/plural when needed)

int main() {
//variables
        //ints
    int ch;             //input for change
    int dollars;
    int quarters;
    int dimes;
    int nickels;
    int pennies;
        //strings
    string d = " Dollar";
    string q = " Quarter";
    string di = " Dime";
    string n = " Nickel";
    string p = " Penny\n";

//input
    cin >> ch;

//conditionals
    if(ch < 1){                         //no change
        cout << "No change\n";
    }
    else{
    //determine coins
        if (ch > 99){                               //dollars
            dollars = (ch - (ch % 100)) / 100;
            ch = ch % 100;
            if (dollars > 1){       //plural
                d = d + "s";
            }
            cout << dollars << d << endl;   //output
        }
        if (ch > 25){                               //quarters
            quarters = (ch - (ch % 25)) / 25;
            ch = ch % 25;
            if (quarters > 1){      //plural
                q = q + "s";
            }
            cout << quarters << q << endl;  //output
        }
        if (ch > 10){                               //dimes
            dimes = (ch - (ch % 10)) / 10;
            ch = ch % 10;
            if (dimes > 1){         //plural
                di = di + "s";
            }
            cout << dimes << di << endl;    //output
        }
        if (ch > 5){                                //nickels
            nickels = (ch - (ch % 5)) / 5;
            ch = ch % 5;
            if (nickels > 1){       //plural
                n = n + "s";
            }
            cout << nickels << n << endl;   //output
        }
        if (ch > 0){
            pennies = ch;                           //pennies
            if (pennies > 1){       //plural
                p = " Pennies\n";        
            }
            cout << pennies << p;           //output
        }
    }

   return 0;
}
