

#include "customer.h"

#include <iostream>
#include <string>

using namespace std;

// Define the Address and Customer structs
struct Address {
    string street;
    string city;
    short zipCode;
};

struct Customer {
    short id;
    string name;
    string email;
    Address nestedAddress;  // address struct nested within customer struct
};

int main25() {
    // Customer: name of the structure type
    // customer1: an instance or object of the Customer structure
    
    // Initializing a complete customer object with a nested address struct
    Customer customer1 = {457, "Merary", "mera@gmail.com", {"Hollie Ave", "Berkeley", 904}};
    
    cout << "Customer Information" << endl;
    
    // Print customer details
    cout << "ID: " << customer1.id << endl;
    cout << "Name: " << customer1.name << endl;
    cout << "Email: " << customer1.email << endl;
    
    // Since these members are nested within a structure, use nestedAddress to access the nested members
    cout << "Street: " << customer1.nestedAddress.street << endl;
    cout << "City: " << customer1.nestedAddress.city << endl;
    cout << "Zip Code: " << customer1.nestedAddress.zipCode << endl;
    
    return 0;
    
}
