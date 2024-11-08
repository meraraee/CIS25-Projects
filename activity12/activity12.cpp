#include "activity12.hpp"
#include <iostream>
using namespace std;

int main12(){
    
    //this program outputs the factorial of a number
    
    int num;
    long int factorial = 1;
    
    cout << "type in a positive number: ";
    cin >> num;
    
    if(num < 0){
        cout << "Error. Must be a positive number." << endl;
    }
    
    for(int i = 1; i <= num; i++){
    
        factorial *= i;
        //aka factorial = factorial * i;
    }
    
    
    cout << "Factorial of " << num << " is : " << factorial << endl;
    
    
    
    return 0;
}
