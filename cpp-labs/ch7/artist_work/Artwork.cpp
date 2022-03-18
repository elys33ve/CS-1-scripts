#include "Artwork.h"
#include <iostream>
using namespace std;

Artwork::Artwork(){
    title = "None";
    year = 0;
}

Artwork::Artwork(string u_title, int u_year, Artist u_artist){
    title = u_title;
    year = u_year;
    artist = u_artist;
}

string Artwork::get_title(){
    return title;
}

int Artwork::get_year(){
    return year;
}

void Artwork::print_info(){
    artist.print_info();
    cout << "Title: " << title << ", " << year << endl;
}
