#include <iostream>
#include <string>
using namespace std;

// create login name for user, given name and 4 digit number:
///// first 5 characters of lastname, first letter of first name and last two digits of number

int main() {
///
	string login;
	string first;
	string last;
	string number;
///
	cin >> first;
    cin >> last;
    cin >> number;
///
if (last.length() >= 5){
    login = last.substr(0,5);
}
else{ 
    login = last;
}
    login.push_back(first.at(0));
    login = login + number.substr(2,3);
///
    cout << "Your login name: ";
    cout << login << endl;
	
	return 0;
}
