#include "Artist.h"
#include "Artwork.h"
#include <iostream>
#include <string>
using namespace std;

// complete the Artist class with constructors to initialize an artist's information, 
// get member functions, and a print_info() member function. The default constructor 
// should initialize the artist's name to "None" and the years of birth and death to 0. 
// print_info() should display Artist Name, born XXXX if the year of death is -1 or 
// Artist Name (XXXX-YYYY) otherwise.

// Complete the Artwork class (in files Artwork.h and Artwork.cpp) with constructors to 
// initialize an artwork's information, get member functions, and a print_info() member function. 
// The constructor should by default initialize the title to "None", the year created to 0. 
// Declare a private field of type Artist in the Artwork class.

int main() {
   string title, name;
   int year, birth, death;

// inputs
   getline(cin, name);
   cin >> birth;
   cin.ignore();
   cin >> death;
   cin.ignore();
   getline(cin, title);
   cin >> year;
   cin.ignore();

// artist info
   Artist artist =  Artist(name, birth, death);
// artwork info
   Artwork artwork = Artwork(title, year, artist);

// output
   artwork.print_info();
}
