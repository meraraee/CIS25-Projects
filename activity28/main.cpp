//
//  main.cpp
//  CIS25
//
//  Created by Merary Murillo on 11/7/24.
//

#include "activity28.hpp"
#include <stdio.h>

#include <iostream>
#include <sstream>   //to utilize stringstream
#include <iomanip>  //to utilize setprecision

using namespace std;


int main28(){
    
    double number = 12.34;
    
    cout << "formatted double to string: " << reusableFunction :: doubleToString(number) << endl;
    
    return 0;
}
