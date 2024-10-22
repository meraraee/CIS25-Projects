#Linear Search Algorithm

Description:
This program implements the linear search algorithm to find a target 
value within an integer array. The function searches through the array 
and returns the index of the target value if it exists; otherwise, it 
returns -1.

##How the Code Works...

Include Libraries:
- #include <iostream>: This library allows for input and output operations using cin and cout.

- Function Definition:
    *linearSearch: This function initializes an integer array and a target value. It calculates the size of the array and then uses a for loop to iterate through the array elements.
    * If the current element matches the target, the function returns its index. If the loop completes without finding the target, the function returns -1.
    
- Main Function:
    * In the main function, the linearSearch function is called, and its result is stored in the index variable.
    * The program then prints the index of the target value. If the target is not found, it will print -1.
