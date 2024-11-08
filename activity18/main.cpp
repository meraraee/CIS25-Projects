//
//  main.cpp
//  CIS25
//
//  Created by Merary Murillo on 11/6/24.
//

#include <stdio.h>
#include "activity18.hpp"

#include <iostream>

using namespace std;

int main18(){
    
   
    int arr[] = {2,8};
    
    //store our number of index in int
    int element0 = 0;
    int element1 = 1;
    
    cout << "original array: ";
    for(int i = 0; i < 2;i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
    
    
    Swapping:: swap(&arr[element0], &arr[element1]); //our argument are elements then are turned to pointers
    
    
    //outputting the swapped array
    cout << "swapped variables: ";
    for(int i = 0; i < 2;i++){
        cout << arr[i] << ", " ;
    }
    cout << endl;
    
    return 0;
}
