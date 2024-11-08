//
//  main.cpp
//  CIS25
//
//  Created by Merary Murillo on 11/6/24.
//

#include <stdio.h>
#include "activity20.hpp"

#include <iostream>

using namespace std;


int main20(){
    
    int num; //int variable to store how many numbers inputted
    
    cout << "type in a few integers" << endl;
    cout << "how many integers will you be inserting? ";
    cin >> num;
    
    //array for list of numbers inputted
    int arr[num];
    
    
    int i = 0;
    
    //adding list of numbers altogether
    while(i < num){
        cout << "int: ";
        cin >> arr[i];
        
        i++;
    }
    
    SumCalculator::total(arr, num);
    
    return 0;
}
