//
//  activity28.cpp
//  CIS25
//
//  Created by Merary Murillo on 11/6/24.
//

#include "activity28.hpp"



#include <stdio.h>
#include <sstream>
#include <iomanip>

#include <iostream>

using namespace std;

namespace reusableFunction{

//REUSABLE FUNCTION
string doubleToString(double num){
    
    stringstream stream;
    
    //fixed: wont allow decimal to output in scientific notation (it will be in fixed-point format, aka originally how it is)
    
    //setporecision(): controls how many decimal places
    
    stream <<  fixed <<  setprecision(1) << num;
    
    return stream.str();    //returning formatted string directly (instead of storing in a string)
}
}

