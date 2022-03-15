#include <iostream>
#include <vector>
using namespace std;

class coordinate {
   public:
      void set_xy(int coorx, int coory) {    // set x, y coordinates to x, y variables
         x = coorx;
         y = coory;
      }
      void print_xy() const {               // prints x, y coordinates as: x - y
         cout << x << " - " << y << endl;
      }
      int getx() const { return x; }        // get constant for x (returns x)
      int gety() const { return y; }        // returns y

   private:
      int x;
      int y;
};

int main() {
   vector<coordinate> points;       // critical points vector
   coordinate curr_xy;               // current coordinates temp
   int xi;           // temp x
   int yi;           // temp y
   unsigned int i;

   cin >> xi;       //get initial x
   cin >> yi;       //get initial y
   while ((xi >= 0) && (yi >= 0)) {         //until negative x, y
      curr_xy.set_xy(xi, yi);           //assign x, y coordinates in class
      points.push_back(curr_xy);        //store current x, y in points vector
      cin >> xi;        //get x input
      cin >> yi;        //get y input
   }

   for (i = 0; i < points.size(); ++i) {    //for size of points
      curr_xy = points.at(i);
      curr_xy.print_xy();       //print coordinates in vector
   }

   return 0;
}
