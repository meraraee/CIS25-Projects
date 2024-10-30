#include <iostream>
using namespace std;

namespace StructurePoint{
    struct Point{
        
        //members
        short x;
        short y;
        
    };

}

int main(){
    
    
    
    StructurePoint :: Point pointer; //accessing Point with namespace
    
    //inintializing instances by user
    cout << "Enter x coordinate: ";
    cin >> pointer.x;
    
    cout << "Enter y coordinate: ";
    cin >> pointer.y;
    
    //if statement to use both quality & output overload operator
    if(pointer.x == pointer.y){
        
        cout << "These 2 coordinates are equal to eachother!";
    }
    else{
        cout << "These 2 coordinates are not equal to eachother.";
    }
    
    cout << endl;
    
    return 0;
}
