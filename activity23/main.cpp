//
//  main.cpp
//  CIS25
//
//  Created by Merary Murillo on 11/6/24.
//

#include <stdio.h>
#include <iostream>

#include "activity23.hpp"

using namespace std;

namespace Validation{
    bool validate(const string &customerNumber);
}


int main23(){
    
    //variable to store users input
    string customerNumber;
    
    cout << "Type in 2 alphabetic characters, followed by 4 digits: " << endl;
    cin >> customerNumber;
    
    //reads an entire line of input from the standard input stream (cin) and stores it in the string variable customerNumber
    // It allows users to enter input that may contain spaces, as opposed to cin >> customerNumber, which stops reading at the first whitespace. It captures everything the user types until they hit Enter.
    
    if(Validation::validate(customerNumber)){ //if validate(customerNumber = true, it will cout valid, BUT if validate(customerNumber = false, it will cout invalid
        cout << "Customer Number is Valid." << endl;
    }
    else{
        cout << "Customer Number is Invalid. " << endl;
    }
    
    return 0;
}


