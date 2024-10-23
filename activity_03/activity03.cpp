#include <iostream>
#include <cstdlib>  //file to use rand, rand just gives you a random number
#include <ctime>    //to use time() function

using namespace std;

int main03(){
    
    //srand() - a function that sets the starting point for generating our random numbers
    
    //static)cast<unsigned> - helps convert the "time()" to an unsigned int
    
    //time(0) - basically you get a value that changes every second
    
    srand(static_cast<unsigned>(time(0)));
    
    
    //assigning our min and max value in our dice
    const int minValue = 1;
    const int maxValue = 6;
    
    
    // Generating 2 random numbers
    int dice1 = (rand() % (maxValue - minValue + 1)) + minValue;
    int dice2 = (rand() % (maxValue - minValue + 1)) + minValue;

    
    //outputting results
    cout << "Dice 1: " << dice1 << endl;
    cout << "Dice 2: " << dice2 << endl;
    
    
    return 0;
}
