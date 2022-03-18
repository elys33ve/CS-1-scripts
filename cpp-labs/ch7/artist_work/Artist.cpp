#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

Artist::Artist(){
    name = "None";
    birth = 0;
    death = 0;
}

Artist::Artist(string u_name, int u_birth, int u_death){
    name = u_name;
    birth = u_birth;
    death = u_death;
}

string Artist::get_name() const{
    return name;
}

int Artist::get_birth() const{
    return birth;
}

int Artist::get_death() const{
    return death;
}

void Artist::print_info() const{
    cout << "Artist: " << name;

    if (death >= 0){
        cout << " (" << birth << '-' << death << ")\n";
    }
    else {
        cout << ", born " << birth << endl;
    }
}
