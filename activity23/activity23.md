Customer Number Validation Program

Overview:

This C++ program validates customer numbers in the format of two 
alphabetic characters followed by four digits (e.g., "AB1234"). It 
prompts the user for input and checks if it meets the required 
criteria.

Functionality:

Input Validation: 
- Checks that the customer number is exactly 6 characters long, with the first two characters being alphabetic letters and the last four being digits.

User Feedback:
-  Informs the user if the entered customer number is valid or invalid.

Key Function: 
- validateCustomerNumber


This function performs the following checks:

Length Check: 
Ensures the customer number has exactly 6 characters.

Alphabetic Check:
Uses isalpha() to verify if the first two characters are alphabetic 
letters.

The expression !isalpha(customerNumber[0]) ||
!isalpha(customerNumber[1]) evaluates to true if either of the first 
two characters is not alphabetic.

Digit Check: 
Verifies that the last four characters are digits using isdigit().

