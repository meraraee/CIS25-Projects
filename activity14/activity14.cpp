
#include "activity14.hpp"

#include <iostream>
#include <ctime> //library in order to use time(0)
#include <cstdlib> //library in order to use srand()

using namespace std;

int main14(){
    
 
    srand(static_cast<unsigned int>(time(0))); //random number generator
    
    int secretNum = rand()  % 1'00'000 + 0; //putting % 1'000'000 + 1 because I want our secretNumber to be from 0 to 1 million
    
    cout << "Guess the secret number: " << endl;
    
    int num = 0;
    
    while(num != secretNum){
        cin >> num;         //we input or store it in while loop to choose whether loop is true or false
               
        if(num != secretNum){
            cout << "Nope Guess again: ";
            
        }
    }

    cout << "Yes! you guessed right. " << endl;

    
    
    return 0;
}

