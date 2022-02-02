    #include <iostream>
    #include <string>
    using namespace std;

    // interstates numbered 1-99; odd numbers = noth/south, even numbers = east/west
    // auxiliary highways numbered 100-999; service primary highway by rightmost 2 numbers
    // given highway number indicate direction & primary or auxiliary; if auxiliary, indicate primary it services

    int main() {
    //variables
    int hw;              //highway number
    int sv;              //serving highway number
        
    string hwt;                  //highway type
    string dir;                  //highway direction    
            //string outputs
    string inv = " is not a valid interstate highway number.\n";     //output for invalid   
    string n_s = ", going north/south.\n";                           //output for direction (north/south)
    string e_w = ", going east/west.\n";                             //output for direction (east/west)
    string hwt_p = " is primary";                                    //output for hw type (primary)
    string hwt_a = " is auxiliary";                                  //output for hw type (auxiliary)
    string sv_h = ", serving I-";                                    //output for hw serving... (last 2 digits aux)        


    //input
    //cin >> hw;       
    hw = 825;
    //conditionals
    if (hw < 1 or (hw % 100) == 0){      //invalid numbers
        cout << hw << inv;                                       //ouput
    }
    else if (hw < 100){                  //primary highways
        hwt = hwt_p;
        if ((hw % 2) == 0){      //even numbers (e/w)
            dir = e_w;
        }
        else{                    //odd numbers (n/s)
            dir = n_s;
        }
        cout << "I-" << hw << hwt << dir;                        //output
    }
    else if (hw < 1000){                 //auxiliary highways
        hwt = hwt_a;
        sv = hw % 100;               //serving highway... (last 2 digits)
        if ((hw % 2) == 0){      //even numbers (e/w)
            dir = e_w;
        }
        else{                    //odd numbers (n/s)
            dir = n_s;
        }
        cout << "I-" << hw << hwt;                               //output
        cout << sv_h << sv << dir;
    }
    else{                                //anything else invalid
        cout << hw << inv;                                       //output
    }

    return 0;
    }
