#ifndef ARTWORKH
#define ARTWORKH

#include "Artist.h"
#include <string>
using namespace std;

class Artwork{
   public:
      Artwork();
      Artwork(string u_title, int u_year, Artist u_artist);
      string get_title();                   //get title
      int get_year();                       //get year created
      void print_info();                    //print art info

   private:
      Artist artist;
      string title;
      int year;

};

#endif
