#include <iostream>
using namespace std;

int main10(){
    
    int sales = 10'000;
    
    cout << "Enter Sales Amount: ";
    cin >> sales;
    
    
    //double = commission = (sales > 10'000') ? .1 : .05;
    //OR below
    //same thing
    
    int commission;
    
    if(sales < 10'000){
        commission = 10;
    }
    else if(sales <= 15'000){
        commission = 5;
    }
    else{
        commission = 20;
    }
    cout << "The Commission is: " << commission << "%" << endl;
    return 0;
}
