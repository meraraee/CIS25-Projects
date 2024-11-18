//
//  project2.cpp
//  CIS25
//

#include "project2.hpp"

#include <iostream>
#include <iomanip>  // for setprecision
#include <memory>   // for unique_ptr

using namespace std;


    void displayMenu(std::unique_ptr<MenuItem[]>& hotDrinks,
                     std::unique_ptr<MenuItem[]>& coldDrinks,
                     std::unique_ptr<MenuItem[]>& desserts) {
        // Display the menu to the customer
        cout << "         MENU " << endl;
        cout << "-----------------------" << endl;
        
        // Display hot drinks menu
        cout << "HOT DRINKS:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << hotDrinks[i].name << " - $"
            << fixed << setprecision(2) << hotDrinks[i].price << endl; // Fixed to two decimal places
        }
        cout << endl;
        
        
        // Display cold drinks menu
        cout << "COLD DRINKS:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << coldDrinks[i].name << " - $"
            << fixed << setprecision(2) << coldDrinks[i].price << endl; // Fixed to two decimal places
        }
        cout << endl;
        
        
        // Display desserts menu
        cout << "DESSERTS:" << endl;
        for (int i = 0; i < 7; i++) {
            cout << i + 1 << ". " << desserts[i].name << " - $"
            << fixed << setprecision(2) << desserts[i].price << endl; // Fixed to two decimal places
        }
        cout << endl;
    }

    double takeOrder(std::unique_ptr<MenuItem[]>& hotDrinks,
                     std::unique_ptr<MenuItem[]>& coldDrinks,
                     std::unique_ptr<MenuItem[]>& desserts) {
        int choice;         // variable to store customers choice
        double total = 0.0; // variable to accumulate the total price
        int qty;            // variable to store the quantity of items
        
        // Hot drinks selection
        cout << "Select a hot drink (1-5) or enter 0 to skip: ";
        cin >> choice;
        if (choice > 0 && choice <= 5) {
            cout << "Enter quantity for " << hotDrinks[choice - 1].name << ": ";
            cin >> qty;
            total += hotDrinks[choice - 1].price * qty;
        }
        
        // Cold drinks selection
        cout << "Select a cold drink (1-5) or enter 0 to skip: ";
        cin >> choice;
        if (choice > 0 && choice <= 5) {
            cout << "Enter quantity for " << coldDrinks[choice - 1].name << ": ";
            cin >> qty;
            total += coldDrinks[choice - 1].price * qty;
        }
        
        // Desserts selection
        cout << "Select a dessert (1-7) or enter 0 to skip: ";
        cin >> choice;
        if (choice > 0 && choice <= 7) {
            cout << "Enter quantity for " << desserts[choice - 1].name << ": ";
            cin >> qty;
            total += desserts[choice - 1].price * qty;
        }
        
        // Return the total amount for all items selected
        return total;
    }

    void processPayment(double total) {
        double payment; // Variable to store the payment amount
        double change;  // Variable to store the change to be returned
        
        cout << "Your total comes to: $" << fixed << setprecision(2) << total << endl;
        cout << "Please enter your payment amount: $";
        cin >> payment;
        
        // Check if payment is enough
        if (payment < total) {
            cout << "Sorry, you don't have enough money." << endl;
        } else {
            // Calculate change and display it
            change = payment - total;
            cout << "Thank you for your purchase!" << endl;
            if (change > 0) {
                cout << "Your change is: $" << fixed << setprecision(2) << change << endl;
            }
        }
    }

    void closingMessage() {
        cout << "Thank you for visiting Roast Bean Cafe!" << endl;
    }
