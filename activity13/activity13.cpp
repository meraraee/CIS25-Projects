#include <iostream>
using namespace std;

int main13(){
    
    
    int x;
    double temp, sum = 0.0; // i've initialized it to 0.0 bc it needs to be initialized to be used in line 20
    
    cout << "How many Temperatures will be typed in? ";
    cin >> x;
    
    //x is how many times it wants ot type in x amount of temps
    for(int i = 0; i < x; i++){
        
        cout << "Type in Temperature: ";
        cin >> temp;
        
        //adding all temperatures
        sum += temp;
        
    }
    
    //finding average: dividing sum by the x amounts of list of temps
    double average = sum/x;
    
    cout << "The average Temperature is: " << average << endl;
    
    return 0;
}
