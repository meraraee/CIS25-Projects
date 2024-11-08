#include <iostream>
#include <memory>  // required for using smart pointers

namespace ArrayOperations{

    // function to fill the array with user input: utilizing for loop
    void fillArray(std::unique_ptr<int[]>& arr, int size) {
        
        for (int i = 0; i < size; ++i) {
            std::cout << "Enter a number for element " << (i + 1) << ": ";
            std::cin >> arr[i];
        }
    }

    //function to calculate the sum of the array alements
    int sumArray(const std::unique_ptr<int[]>& arr, int size) {
        
        int sum = 0;//initializing variable to store sum
        
        for (int i = 0; i < size; ++i) {
            sum += arr[i]; //adding each element to "sum"
        }
        return sum;
    }
}

