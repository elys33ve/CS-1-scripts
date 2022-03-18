#include <iostream>
#include <math.h>
using namespace std;

// Given main(), complete the Car class with member functions to set 
// and get the purchase price of a car.


////////// CLASS Car
class Car {
   private:
      int m_year;             //model year
      int p_price;            //purchase price
      int c_value;            //current value

   public:
      void set_year(int u_year);       //set model year
      int get_year() const;            //get model year 
      void set_price(int p_price);     //set purchase price
      int get_price();                 //get purchase price
      void calc_value(int year);       //calculate current value
      void print_info();               //print info (model year, purchase price, current value)

};


////////// Car FUNCTION DEFINITIONS
void Car::set_year(int u_year) {    //set model year to user input
   m_year = u_year;
}

int Car::get_year() const {         //return model year as int
   return m_year;
}

void Car::set_price(int u_price) {  //set purchase price to user input
p_price = u_price;
}

int Car::get_price() {              //return purchase price as int
   return p_price;
}

void Car::calc_value(int c_year) {  //calculate current value
   double d_rate = 0.15;
   int age = c_year - m_year;
// Car depreciation formula
   c_value = (int)
      round(p_price * pow((1 - d_rate), age));
}

void Car::print_info() {            //print car info
   cout << "Car's information:\n";
   cout << "   Model year: " << m_year << endl;
   cout << "   Purchase price: " << p_price << endl;
   cout << "   Current value: " << c_value << endl;
}


////////// main
int main() {
   int u_year1;      //user model year
   int u_price;      //user price
   int u_year2;      //user current year
   Car myCar;

// inupts
   cin >> u_year1;
   cin >> u_price;
   cin >> u_year2;

// set values
   myCar.set_year(u_year1);
   myCar.set_price(u_price);
   myCar.calc_value(u_year2);

// output
   myCar.print_info();

   return 0;
}
