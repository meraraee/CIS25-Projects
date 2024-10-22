#Swap Function using Pointers

Description:
This program demonstrates how to implement a swap function that 
exchanges the values of two variables using pointers. The swappy 
function takes two integer pointers as parameters and swaps the values 
they point to. This allows for changing the original values of the 
variables passed to the function.


How the Code Works...

Include Libraries:
- #include <iostream>: This library allows for input and output operations using cin and cout.

Function Definition:
- swappy: This function takes two integer pointers as parameters. It swaps the values at the addresses pointed to by the pointers. A temporary variable is used to hold the value of one variable during the swap.

Main Function:
- Two integer variables, x and y, are initialized with values 2 and 7.
- The program displays the initial values of x and y.
- The swappy function is called with the addresses of x and y, allowing the function to modify their values.
- Finally, the program prints the values of x and y after the swap operation.
