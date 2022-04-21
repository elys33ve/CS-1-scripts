#include <iostream>
#include"tree.cpp"

using namespace std;

///// check function
void check (int x, int y){
    if (x == y){
        cout << "\t\tCORRECT\n";}
    else{
        cout << "\t\tNOPE\n";}
}

void tests (){
    tree tree1;
    int val;   // value

    /////   add first value
    cout << endl << "----------Test 1----------     add value for head";

    tree1.reset_to_head();      //start at head
    tree1.insert(25);           //insert val at head
    tree1.print();              //should print 25

    cout << "size: "; check(tree1.get_size(), 1);
	cout << "depth: "; check(tree1.depth(), 1);
    cout << "value: "; check(tree1.get_value(), 25);

	cout << "left null: "; check(tree1.left_null(), 1);     //should be true (1)
	cout << "right null: "; check(tree1.right_null(), 1);   //should be true (1)

    /////   add children of first
    cout << endl << "----------Test 2----------     add children of head";

    cout << endl; val = 20;
	tree1.go_left(); tree1.insert(val);                  //insert 20 left child
    cout << "value: "; check(tree1.get_value(), val);    //should be 20
    cout << "left null: "; check(tree1.left_null(), 1);     //should be true (1)
	cout << "right null: "; check(tree1.right_null(), 1);   //should be true (1)
    tree1.reset_to_head();

    cout << endl; val = 36;
	tree1.go_right(); tree1.insert(val);                 //insert 36 right child
    cout << "value: "; check(tree1.get_value(), val);    //should be 36
    cout << "left null: "; check(tree1.left_null(), 1);     //should be true (1)
	cout << "right null: "; check(tree1.right_null(), 1);   //should be true (1)
    tree1.reset_to_head();

    cout << endl;
    cout << "size: "; check(tree1.get_size(), 3);
	cout << "depth: "; check(tree1.depth(), 2);
    cout << "value: "; check(tree1.get_value(), 25);
    cout << "left null: "; check(tree1.left_null(), 0);
	cout << "right null: "; check(tree1.right_null(), 0);

    /////   print
    cout << endl << "----------Test 3----------     print";
    cout << endl; tree1.print();

    /////   add more children
    cout << endl << "----------Test 4----------     add next layer children";
    val = 10;
	tree1.reset_to_head(); tree1.go_left();        //go left from head
    tree1.go_left(); tree1.insert(val);                  //insert 10 left child
    val = 22;
    tree1.reset_to_head(); tree1.go_left();        //go left from head
    tree1.go_right(); tree1.insert(val);                  //insert 22 left child

    val = 30;
	tree1.reset_to_head(); tree1.go_right();        //go right from head
    tree1.go_left(); tree1.insert(val);                  //insert 30 left child
    val = 40;
    tree1.reset_to_head(); tree1.go_right();        //go right from head
    tree1.go_right(); tree1.insert(val);                  //insert 40 left child
    
    cout << endl; tree1.print(); cout << endl;
}





int main (){
    tree tree1;
    int val;    //value

////////////

// add layer 1  (head)
    tree1.reset_to_head();      //start at head
    tree1.insert(25);                                    //insert 25 at head

// add layer 2
    val = 20;
	tree1.go_left(); tree1.insert(val);                  //insert 20 left child
    tree1.reset_to_head();

    val = 36;
	tree1.go_right(); tree1.insert(val);                 //insert 36 right child
    tree1.reset_to_head();

// add layer 3  (use go_right() & go_left())
    val = 10;
	tree1.reset_to_head(); tree1.go_left();        //go left from head
    tree1.go_left(); tree1.insert(val);                  //insert 10 left child

    val = 22;
    tree1.reset_to_head(); tree1.go_left();        //go left from head
    tree1.go_right(); tree1.insert(val);                  //insert 22 left child

    val = 30;
	tree1.reset_to_head(); tree1.go_right();        //go right from head
    tree1.go_left(); tree1.insert(val);                  //insert 30 left child

    val = 40;
    tree1.reset_to_head(); tree1.go_right();        //go right from head
    tree1.go_right(); tree1.insert(val);                  //insert 40 left child

// add layer 4
    //use go_parent()
    tree1.reset_to_head();

    val = 5;
    tree1.go_left(); tree1.go_left(); 
    tree1.go_left(); tree1.insert(val);

    val = 12;
    tree1.go_parent();
    tree1.go_right(); tree1.insert(val);

    //use go_next() & go_previous()
    tree1.reset_to_head();

    val = 38;
    tree1.go_right(); tree1.go_right();
    tree1.go_left(); tree1.insert(val);

    val = 48;
    tree1.go_next(); tree1.insert(val);

    val = 28;
    tree1.go_previous(); tree1.go_previous();
    tree1.go_previous(); tree1.insert(val);

// add layer 5 (use go_to())
    val = 1;
    tree1.go_to(15);
    tree1.insert(val);

    val = 8;
    tree1.go_to(16);
    tree1.insert(val);

    val = 15;
    tree1.go_to(18);
    tree1.insert(val);

    val = 45;
    tree1.go_to(29);
    tree1.insert(val);

    val = 50;
    tree1.go_to(30);
    tree1.insert(val);

/////
    
    
    cout << endl; tree1.print(); cout << endl;

/////


	//tree1.remove();

    return 0;
}
