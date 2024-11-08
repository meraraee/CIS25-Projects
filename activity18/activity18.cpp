#include "activity18.hpp"

#include <iostream>
using namespace std;

namespace Swapping{     //namespace convention
    void swap(int *ptr1, int *ptr2){ //parameters are our pointers
        
        //sawping where our pointers are pointing in which index
        int temp = *ptr1;
        
        *ptr1 = *ptr2;
        
        *ptr2 = temp;
        
    }
}


