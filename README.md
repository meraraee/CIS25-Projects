Rock, Paper, Scissors Game

Description: This C++ program is a simple implementation of the classic Rock, Paper, Scissors game. Players can choose between rock, paper, and scissors, while the computer makes a random choice. The program determines the winner, keeps track of the player's statistics, and allows the player to play multiple rounds.

Features: User-friendly interface for choosing between rock, paper, and scissors. Random choice generation for the computer's move. Real-time determination of the winner for each round. Statistics tracking for wins, losses, and ties. Option to play multiple rounds.

How It Works...

The program begins by greeting the player and explaining the rules.
The player is prompted to enter their choice: Rock (1), Paper (2), or Scissors (3).
The computer randomly selects a choice using a random number generator.
The program compares the player’s choice with the computer’s choice to determine the winner.
Statistics are updated and displayed after each round.
The player is asked if they want to play again; the game continues until they choose not to.
Code Structure:

Includes the necessary libraries (iostream, cstdlib, ctime) for input/output and random number generation.
Function: determineWinner takes user and computer choices and returns the result as a string.
Main Loop: Contains the game logic, including user input, random choice generation, result determination, and statistics tracking.
