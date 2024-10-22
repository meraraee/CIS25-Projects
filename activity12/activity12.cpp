#include <iostream>
using namespace std;

int main12(){
    
    //this program outputs the factorial of a number
    
    int num;
    int factorial = 1;
    cout << "type in a positive number: " << endl;
    cin >> num;
    
    for(int i = 1; i <= num; i++){
    
        factorial *= i;
        //aka factorial = factorial * i;
    }
    
    
    cout << "Factorial of your number: " << factorial << endl;
    
    
    
    return 0;
}
