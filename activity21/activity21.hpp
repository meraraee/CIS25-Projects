//
//  activity21.hpp
//  CIS25
//
//  Created by Merary Murillo on 10/17/24.
//

#ifndef activity21_hpp
#define activity21_hpp

#include <stdio.h>

#include <iostream>

using namespace std;

namespace ArrayOperations{
    
    void fillArray(std::unique_ptr<int[]>& arr, int size);

    int sumArray(const std::unique_ptr<int[]>& arr, int size);

}

#endif /* activity21_hpp */

