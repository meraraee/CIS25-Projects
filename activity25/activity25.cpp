#include "customer.h"
#include "address.h"
#include <iostream>

using namespace std;

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


