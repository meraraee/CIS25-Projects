#include "activity20.hpp"
#include <iostream>
using namespace std;

namespace SumCalculator{
    int total(int arr1[], int sizee){
        
        int summ = 0; //variable to store in all integers
        
        for(int i = 0; i < sizee; i++){ //loop to add in all integers
            summ += arr1[i];
            
        }
        
        cout << "the sum is: " << summ << endl;
        
        return summ;
        
    }
}

