//
//  main.cpp
//  CIS25
//
//  Created by Merary Murillo on 11/6/24.
//

#include "activity19.hpp"
#include <stdio.h>
#include <iostream>

using namespace std;

namespace SwappingFunctions{
void swappy(int *a, int *b);
}

int main19(){
    
    int x = 2;
    int y = 7;
    
    
    cout << "Before swap " << endl << "x = " << x << endl << "y = " << y << endl;
    
    SwappingFunctions:: swappy(&x, &y); //passing address of x and y
    
    cout << "After swap" << endl << "x = " << x << endl << "y = " << y << endl;

    return 0;
}
