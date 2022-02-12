#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

// output middle integer of inputed list (that stops with input -1)

int main() {
    vector<int> v;      //vector for inputs
    int input;          //user input
    int mid;            //middle value

    input = 0;

    while (!(input == -1)){         //take input until -1
        cin >> input;
        v.push_back(input);
    }

    v.pop_back();                   //remove -1
    mid = v.size() / 2;             //size of vector

    cout << "Middle item: " << v.at(mid) << endl;

   return 0;
}
