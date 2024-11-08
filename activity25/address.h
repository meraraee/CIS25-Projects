//
//  address.h
//  CIS25
//
//  Created by Merary Murillo on 11/6/24.
//

#ifndef address_h
#define address_h

#include <string>

namespace NestedStructures{

    struct Address{ //address struct must be on top or else compiler wont know what address is in customer struct
        
        std :: string street;
        std ::  string city;
        short zipCode;
        
    };
}

#endif /* address_h */
