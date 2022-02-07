#include <iostream>
#include <string>
using namespace std;

// input = first, middle, last names
// output = lastname, first initial. middle initial.
// if input is first last name, output is just lastname, first initial.

int main() {
///
    string fn;      //firstname
    string mn;      //middlename
    string ln;      //lastname
    char fi;    //first initial
    char mi;    //middle initial
    bool middlename;        //middle name entered
///    
    cin >> fn;
    getline(cin, ln);
    
///    
    fi = fn.at(0);

    ln = ln.substr(1, ln.length()+1);           //take space out of ln

    if (ln.find(" ") == string::npos){           //if 3 names entered
        middlename = false;
    }
    else{
        middlename = true;
        mn = ln.substr(0, ln.find(" "));
        ln = ln.substr(ln.find(" ")+1, ln.length()+1) + ", ";
        mi = mn.at(0);
    }
    
///
    if (middlename == true){
        cout << ln << fi << "." << mi << "." << endl;
    }
    else{
        cout << ln << ", " << fi << "." << endl;
    }

    return 0;
}
