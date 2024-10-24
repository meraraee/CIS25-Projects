#include <iostream>
using namespace std;


namespace SwappingFunction{
    void swappy(int *a, int *b){ //our parameterss are pointer to an integer
        
        int temp = *a; //temporarily storing the value pointed to a
        *a =  *b; //value at the address pointed by b is assigned to the address pointed by a (variable pointed by a now holds 7)
        *b = temp; //assigning temp(2) to variable pointed to by b (variable pointed by b now holds 2)
        
    }

}
int main19(){
    
    int x = 2;
    int y = 7;
    
    
    cout << "Before swap " << endl << "x = " << x << endl << "y = " << y << endl;
    
    SwappingFunction:: swappy(&x, &y); //passing address of x and y
    
    cout << "After swap" << endl << "x = " << x << endl << "y = " << y << endl;

    return 0;
}
