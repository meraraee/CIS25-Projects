//
//  main.cpp
//  CIS25
//
//  Created by Merary Murillo on 11/7/24.
//

#include <stdio.h>

#include "activity29.hpp"

#include <iostream>

using namespace std;


int main29(){
    
    string movieData = "24 s2, 2014";   //the given string to parse
    
    
    // calling parseStringtoStruct and storing the result
    Parse :: Movie movie1 = Parse :: parseStringtoStruct(movieData);
    
    
    cout << "Movie details: " << movie1.movieDetails << endl;
    cout << "Movie year: " << movie1.year << endl;
    
    cout << endl;
    
    return 0;
}
