#ifndef ARTISTH
#define ARTISTH

#include <string>
using namespace std;

class Artist{
   public:
      Artist();
      Artist(string u_name, int u_birth, int u_death);
      string get_name() const;
      int get_birth() const;
      int get_death() const;
      void print_info() const;

   private:
      string name;
      int birth;
      int death;

};

#endif
