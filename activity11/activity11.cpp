#include "activity11.hpp"
#include <iostream>
using namespace std;

int main11(){
    
    
    int value1, value2;
    
        
    cout << "Enter the first value: ";
    cin >> value1;
    cout << "Enter the second value: ";
    cin >> value2;
    
    
    if(value1 > value2){
        cout << "larger value: " << value1 << endl;
    }
    else if(value1 < value2){
        cout << "value " << value2 << " is greater" << endl;
    }
    
    return 0;
}
