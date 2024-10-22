#include <iostream>

using namespace std;

int main22(){
    
    
    //"subset" refers to a portion or selection of a larger set or collection
    
    string fullName = "Merary Murillo";
    
    string firstName = fullName.substr(0,6);
    
    string lastName = fullName.substr(6,12);
    
    cout << "First Name: " << firstName << endl << "Last Name: " << lastName << endl;
    
    
    return 0;
}
