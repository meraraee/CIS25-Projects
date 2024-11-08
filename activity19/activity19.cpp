#include "activity19.hpp"
#include <iostream>
using namespace std;


namespace SwappingFunctions{
    void swappy(int *a, int *b){ //our parameterss are pointer to an integer
        
        int temp = *a; //temporarily storing the value pointed to a
        *a =  *b; //value at the address pointed by b is assigned to the address pointed by a (variable pointed by a now holds 7)
        *b = temp; //assigning temp(2) to variable pointed to by b (variable pointed by b now holds 2)
        
    }

}
