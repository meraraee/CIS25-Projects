Parse String to Movie Struct

This project demonstrates how to parse a formatted string containing 
movie data into a Movie structure. The string is parsed into a movie's 
details and release year, with the result being displayed in the 
console.


Files Included:

main.cpp: The main program demonstrating how to use the
parseStringtoStruct function to parse movie data.

parseMovie.cpp: The file that contains the implementation of the 
parseStringtoStruct function.

parseMovie.hpp: The header file that declares the Movie structure and 
the parseStringtoStruct function.



Functionality:

The project parses a string containing movie data (in the format 
"movie details, year") into a Movie structure. The Movie structure 
contains two fields:

movieDetails: A string representing the movie's details 

year: An integer representing the release year 

How the Parsing Works:
- The function parseStringtoStruct uses a stringstream to parse the 
input string.
- The movie's details are extracted using getline (up to the comma),
and the year is extracted by reading the remaining part of the string 
after the comma.

