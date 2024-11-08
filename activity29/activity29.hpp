//
//  activity29.hpp
//  CIS25
//
//  Created by Merary Murillo on 11/7/24.
//

#ifndef activity29_hpp
#define activity29_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

namespace Parse {

    struct Movie {
        string movieDetails;  // "24 s2"
        int year;                  // "2014"
    };

    // Function signature for parseStringtoStruct
    Movie parseStringtoStruct(string moviedata);

}


#endif /* activity29_hpp */
