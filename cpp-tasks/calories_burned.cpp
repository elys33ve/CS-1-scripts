#include <iostream>
#include <iomanip>
using namespace std;

//estimate the average calories burned when exercising
//Calories = ( (Age x 0.2757) + (Weight x 0.03295) + (Heart Rate x 1.0781) — 75.4991 ) x Time / 8.368
//  (output float w 2 decimals)

int main() {
//variables
   int age;     //age (yrs)
   int weight;  //weight (lbs)
   int hr;      //heartrate (bpm)
   int t;       //time (mins)
   double cals;    //calories burned
   
//inputs
   cout << "age weight heartrate time\n";
   cin >> age;
   cin >> weight;
   cin >> hr;
   cin >> t;

//equation
   cals = ( (age * 0.2757) + (weight * 0.03295) + (hr * 1.0781) - 75.4991 ) * t / 8.368;
   
//output
    cout << "Calories: ";
    cout << fixed << setprecision(2) << cals;
    cout << " calories" << endl;

   return 0;
}
