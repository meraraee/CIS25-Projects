//
//  main.cpp
//  CIS25
//
//  Created by Merary Murillo on 11/6/24.
//

#include <stdio.h>
#include "activity16.hpp"

#include <iostream>

using namespace std;


namespace AnalyzingGrades{
    int highestScore(int grade[], int size);

    int lowestScore(int grades[], int size);

    double averageScore(int grades[], int size);

    void aboveAverageScore(int max, int low, int average, int grades[], int size);
}

int main16(){
    
//array s to store grades and ask for students name;
    string students[7];
    int grades[7];
    
    //loop gather soem info
    for(int i = 0; i < 7; i++){
        cout << "students name: ";
        cin >> students[0 + i];
        
        cout << students[0 + i] << "'s' grade: ";
        cin >> grades[0 + i];
        
        cout << endl;
        
    }
    
//calculating number of elements
    int size  = sizeof(grades) / 4;
    
//calling functions
    
 int highest =  AnalyzingGrades::highestScore(grades, size);
    
 int lowest = AnalyzingGrades::lowestScore(grades, size);

 int average = AnalyzingGrades:: averageScore(grades, size);
    
AnalyzingGrades::aboveAverageScore(highest, lowest, average, grades, size);
    
      
    return 0;
    
}

