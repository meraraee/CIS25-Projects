//
//  activity29.cpp
//  CIS25
//
//  Created by Merary Murillo on 11/7/24.
//

#include "activity29.hpp"   // by including the header file in .cpp file, we avoid the need to redefine the structure 

#include <iostream>
#include <sstream>

using namespace std;

namespace Parse{

//no need to call struct since the declaration is in header file

    //function to parse the given string into the Movie structure
    Movie parseStringtoStruct(string moviedata){
        
        
        Movie movie1;   //creating instance of Movie struct
        
        
        stringstream ss(moviedata); //variable that holds the stringstream that will be used to parse moviedata
        //ss: variable name for the stringstream object
        
        
        //using getline to store everything in movieDetais up to where the "," is
        getline(ss, movie1.movieDetails, ',');  
        
        
        ss >> movie1.year;      //extracts 2014 and stores it in year
        
        return movie1;            //returning the parsed Movie movie1 object
    }
}

