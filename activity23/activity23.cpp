#include "activity23.hpp"

#include <iostream>
#include <cctype> //to utilize isalpha()

using namespace std;


namespace Validation{   //namespace convention

    //A boolean function is best suited for customer number validation because it clearly indicates validity with a simple true or false return, making the code easy to read and maintain.

    // passing the string by reference(&) while ensuring that the function does not modify it(const)

    bool validate(const string &customerNumber){
        
        //checking if characters is exactly 6
        if(customerNumber.length() != 6){
            return false;
        }
        
        //checking if the first character (customerNumber[0]) is not an alphabetic letter or. The second character (customerNumber[1]) is not an alphabetic letter.
        if(!isalpha(customerNumber[0]) || !isalpha(customerNumber[1])){
            return false;
        }
        
        // loop to check if the last four characters are digits
        for(int i = 2; i < 6; ++i) {
            if (!isdigit(customerNumber[i])){
                return false;
            }
        }
        
        return true;
    }
}

  
