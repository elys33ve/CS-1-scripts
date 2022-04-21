#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include"tree.cpp"

using namespace std;


int main (){
    tree tree1;
    int N;
    int i;


    for (i=0; i<1000; i++){
        N = rand() % 100;
        
        tree1.insert(N);
        tree1.go_next();
    }

    //tree1.print();    

    return 0;
}
