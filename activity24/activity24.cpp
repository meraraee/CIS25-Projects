#include <iostream>
using namespace std;


struct Customers{

    //members that will hold
    int id;
    string name;
    string email;
    
    
    
};


int main(){
    
    //Customers: name of the struct
    //Person: specific object of that type (an instance) that holds data.
    Customers Person;
    
    //accessing members of struct
    cout << "Type in ID: ";
    cin >> Person.id;
    
    cout << "Enter your name: ";
    getline(cin, Person.name); //reading entire line for the name
    
    cout << "Enter your Email: ";
    cin >> Person.email;
    
    cout << "ID: " << Person.id << endl << "Name: " << Person.name << endl << "Email: " << Person.email;
    
    cout << endl;
    
    return 0;
}
