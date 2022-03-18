#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

// Given class Triangle (in files Triangle.h and Triangle.cpp), complete main() 
// to read and set the base and height of triangle1 and of triangle2, determine 
// which triangle's area is larger, and output that triangle's info, making use of 
// Triangle's relevant member functions.
// from 3 different files (Triangle.h, Triangle.cpp, main.cpp)
      //(was just testing from this)

////////////////////////////// Triangle.h

class Triangle {
   private:
      double base;
      double height;
   
   public:
      void SetBase(double userBase);
      void SetHeight(double userHeight);
      double GetArea() const;
      void PrintInfo() const;
};

////////////////////////////// Triangle.cpp

void Triangle::SetBase(double userBase) {
   base = userBase;
}

void Triangle::SetHeight(double userHeight) {
   height = userHeight;
}

double Triangle::GetArea() const {
   return 0.5 * base * height;
}

void Triangle::PrintInfo() const {
   cout << fixed << setprecision(2);
   cout << "Base: " << base << endl;
   cout << "Height: " << height << endl;
   cout << "Area: " << round(GetArea() * 100.0f) / 100.0f << endl;
}

////////////////////////////// main.cpp

int main() {
   Triangle triangle1;
   Triangle triangle2;
   double t1;                 //temp 1 --> base
   double t2;                 //temp 2 --> height
   double a1;        //area 1
   double a2;        //area 2

// set triangle 1
   cin >> t1;
   cin >> t2;
   triangle1.SetBase(t1);
   triangle1.SetHeight(t2);
// set triangle 2
   cin >> t1;
   cin >> t2;
   triangle2.SetBase(t1);
   triangle2.SetHeight(t2); 

// get areas
   a1 = triangle1.GetArea();
   a2 = triangle2.GetArea();

   cout << "Triangle with larger area:" << endl;
// compare
   if (a1 > a2){
      triangle1.PrintInfo();
   }
   else{
      triangle2.PrintInfo();
   }
   
   return 0;
}
