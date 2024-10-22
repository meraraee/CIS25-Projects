#Random Number Guessing Game#

##Description:

This program generates a random secret number and prompts the user to
guess it. Using a while loop, the program continuously asks the user 
for their guess until they correctly identify the secret number. This 
project demonstrates basic concepts of random number generation, user 
input handling, and control structures in C++.

##Include Libraries:
- #include <iostream>: This library allows the program to perform input and output operations using cin and cout.
- #include <ctime>: This library provides functionality for time-related functions, specifically for seeding the random number generator.
- #include <cstdlib>: This library is necessary for using the rand() function to generate random numbers.

##Seed the Random Number Generator:
- srand(static_cast<unsigned int>(time(0)));: This line seeds the random number generator with the current time. The time(0) function returns the current time in seconds since the epoch (January 1, 1970). Using this value as a seed ensures that a different sequence of random numbers is generated each time the program runs.

##Generate a Secret Number:

- int secretNum = rand() % 1'000'000;: 
This line generates a random secret number between 0 and 999,999. The 
rand() function generates a pseudo-random integer, and the modulo 
operator % limits the range of possible values.

- User Input Loop:
The program prompts the user to guess the secret number. An integer variable num is initialized to 0 to store the user’s guess.

- while (num != secretNum): This loop continues as long as the user’s guess is not equal to the secret number. Inside the loop:
The program reads the user's input using cin >> num;.
If the guess is incorrect, the program outputs "Nope, Guess again: " and prompts the user for another guess.

- Winning Message:
When the user correctly guesses the secret number, the loop terminates, and the program prints "Yes! You guessed right."
