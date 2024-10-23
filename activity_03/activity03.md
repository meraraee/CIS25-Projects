This program simulates rolling two six-sided dice. It generates two random numbers between 1 and 6, representing the results of each die roll. The results are then displayed on the console.

#Libraries Used:
<iostream>: For input and output operations.
<cstdlib>: To use the rand() function for generating random numbers.
<ctime>: To utilize the time() function for seeding the random number generator.

#Seeding the Random Number Generator:
srand(static_cast<unsigned>(time(0))); sets the starting point for the random number generation using the current time, ensuring different results in each run.

#Random Number Generation:
The program generates two random numbers (dice1 and dice2) using the formula:
cpp
Copy code
int dice = (rand() % (maxValue - minValue + 1)) + minValue;
This ensures the numbers are constrained between minValue (1) and maxValue (6).

#Output:
The results of the dice rolls are printed to the console.



