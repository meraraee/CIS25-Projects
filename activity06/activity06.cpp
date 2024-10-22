#include <iostream>
using namespace std;

int main06(){
    
    
    string street, city, state;
    int zipCode;
    
    cout << "Hello there!" << endl;
    cout << endl;
    
    cout << "Enter your Street: ";
    cin >> street;

    cout << "Enter your City: ";
    cin >> city;
    
    cout << "Enter your State: ";
    cin >> state;
    
    cout << "Enter your Zip Code: ";
    cin >> zipCode;
    
    cout << endl;
    
    cout << street << endl;
    
    cout << " " << endl;
    
    cout << city << ", " << state << ", "  << zipCode << endl;
    
    
    return 0;
}
