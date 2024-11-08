//
//  main.cpp
//  CIS25
//
//  Created by Merary Murillo on 11/6/24.
//

#include <stdio.h>
#include "activity24.hpp"

#include <iostream>

using namespace std;

namespace Structure{
    struct Customer{
      
            
            //members that will hold
            int id;
            string name;
            string email;
    };
}

int main24(){
    
    //Customers: name of the struct
    //Person: specific object of that type (an instance) that holds data.
    Structure :: Customer Person;
    
    //accessing members of struct
    cout << "Type in number ID: ";
    cin >> Person.id;
    
    cout << "Enter your name: ";
    cin >> Person.name; //reading entire line for the name

    cout << "Enter your Email: ";
    cin >> Person.email;
    
    cout << "ID: " << Person.id << endl << "Name: " << Person.name << endl << "Email: " << Person.email;
    
    cout << endl;
    
    return 0;
}
