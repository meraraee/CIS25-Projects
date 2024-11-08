//
//  main.cpp
//  CIS25
//
//  Created by Merary Murillo on 11/6/24.
//

#include <stdio.h>

#include "activity21.hpp"


#include <iostream>
#include <memory>  // required for using smart pointers

using namespace std;

namespace ArrayOperations{
    
    void fillArray(std::unique_ptr<int[]>& arr, int size);

    int sumArray(const std::unique_ptr<int[]>& arr, int size);

}

int main21() {
    int size; //initializing variable to hold size of array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Creating a smart pointer for a dynamic array
    std::unique_ptr<int[]> arr(new int[size]);

    // Filling the array with numbers
    ArrayOperations::fillArray(arr, size);

    // Calculating and printing the sum of the array
    int sum = ArrayOperations::sumArray(arr, size);
    std::cout << "The sum of the array elements is: " << sum << std::endl;

    return 0;
}

