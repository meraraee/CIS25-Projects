#ARRAY SUM USING SMART POINTERS

##Description:
This C++ program demonstrates the use of smart pointers for dynamic 
memory allocation of an array. It allows users to input numbers, which 
store in the array & calculatea the sum of all the numbers/elements.
*Smart Pointers: "unique_ptr" are used to manage memory automatically, which ensures that there are no memory leaks. 

##Features: 
- Dynamic memory allocation using smart pointers
- User input for array elements
- Calculation and display of the sum of the array elements

##Requirements:
- A C++ compiler


HOW THE CODE WORKS...

Headers: 
The program includes <iostream> for input/output and <memory> for 
smart pointers.

Filling the Array:
 The fillArray function prompts the user to enter numbers and stores 
 them in the dynamically allocated array.
 
Calculating the Sum: 
The sumArray function computes the total of the array elements and 
returns the sum.

Main Function:
It prompts the user for the array size and creates a smart pointer for 
the dynamic array. It calls fillArray to populate the array and 
sumArray to calculate the sum.
Finally, it prints the sum.

Memory Management: Using std::unique_ptr ensures that memory is 
automatically freed when the pointer goes out of scope, preventing
memory leaks.


