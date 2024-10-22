#include <iostream>
#include <memory>  // required for using smart pointers


// function to fill the array with user input: utilizing for loop
void fillArray(std::unique_ptr<int[]>& arr, int size) {
    
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter a number " << (i + 1) << ": ";
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

int main21() {
    int size; //initializing variable to hold size of array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Creating a smart pointer for a dynamic array
    std::unique_ptr<int[]> arr(new int[size]);

    // Filling the array with numbers
    fillArray(arr, size);

    // Calculating and printing the sum of the array
    int sum = sumArray(arr, size);
    std::cout << "The sum of the array elements is: " << sum << std::endl;

    return 0;
}
