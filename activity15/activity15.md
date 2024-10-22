#Star Pattern Generator#

Description: 
This program prompts the user to enter the number of rows and then 
prints a right-aligned triangle of stars (*). The number of stars in 
each row corresponds to the row number, creating a visual 
representation of increasing star counts.

##How the Code Works

Include Libraries:
- #include <iostream>: This library enables input and output operations using cin and cout.

- User Input:
The program prompts the user to enter the number of rows for the star pattern and stores the value in the rows variable.

- Outer Loop:
for (int i = 1; i <= rows; i++): This loop iterates from 1 to the specified number of rows. Each iteration corresponds to a new row of stars.

- Printing Spaces:
Inside the outer loop, a nested loop for (int j = i; j < rows; j++) is used to print spaces before the stars. The number of spaces decreases with each row to create a right-aligned effect.

- Printing Stars:
Another nested loop for (int k = 1; k <= i; k++) is used to print the stars. The number of stars printed corresponds to the current row number (i).

- New Line:
cout << endl;: After each row is printed, the program moves to the next line.
