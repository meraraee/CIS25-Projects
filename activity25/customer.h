//
//  customer.h
//  CIS25
//
//  Created by Merary Murillo on 11/6/24.
//

#ifndef customer_h
#define customer_h

#include <string>

#include "address.h"

namespace NestedStructures{
struct Customer{
    
        short id;
        std :: string name;
        std :: string email;
    Address nestedAddress;  //address struct nested within customer struct
        
    };
}

#endif /* customer_h */
