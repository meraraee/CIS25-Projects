#include <iostream>
using namespace std;


namespace NestedStructures{

    struct Address{ //address struct must be on top or else compiler wont know what address is in customer struct
        
        string street;
        string city;
        short zipCode;
        
    };
    struct Customer{
        
            short id;
            string name;
            string email;
        Address nestedAddress;  //address struct nested within customer struct
            
        };


}


int main(){
    
    //Customer: name of the structure type
    //customer1: an instance or object of the Customer structure
    
    NestedStructures::Customer customer1; //initializing customer object
    
    
    //initialzing a complete costumer object within a nested struct
    NestedStructures::Customer costumer1 = {457, "merary", "mera@gmail",{"Hollie Ave", "Berkeley", 904}};
    
    
    return 0;
}
