//
//  main.cpp
//  CIS25
//


#include <stdio.h>

#include <iomanip> //setprecision - for formatting output
#include <memory>  //for the usage of smart pointers
#include <iostream>
#include "project2.hpp"  // Includes enum DrinkType and MenuItem struct

using namespace std;



int mainProj2() {
    
    
    // Welcome message for the user
    cout << "Welcome to Roast Bean Cafe!" << endl;
    cout << endl;

    // Manually initialize the array of MenuItems
    auto hotDrinksSP = std::make_unique<MenuItem[]>(5);  // Allocate an array of MenuItem (default-initialized elements)
    hotDrinksSP[0] = MenuItem("Hot Chocolate", 3.20, HOT); // Initialize each element with the constructor
    hotDrinksSP[1] = MenuItem("Hot Coffee", 4.00, HOT);
    hotDrinksSP[2] = MenuItem("Chai Latte", 3.75, HOT);
    hotDrinksSP[3] = MenuItem("Chamomile Tea", 2.25, HOT);
    hotDrinksSP[4] = MenuItem("Mocha", 5.00, HOT);

    auto coldDrinksSP = std::make_unique<MenuItem[]>(5);
    coldDrinksSP[0] = MenuItem("Iced Coffee", 2.50, COLD);
    coldDrinksSP[1] = MenuItem("Iced Chai Latte", 3.00, COLD);
    coldDrinksSP[2] = MenuItem("Peach Iced Tea", 3.25, COLD);
    coldDrinksSP[3] = MenuItem("Frapuccino", 4.75, COLD);
    coldDrinksSP[4] = MenuItem("Smoothie", 4.00, COLD);

    auto dessertsSP = std::make_unique<MenuItem[]>(7);
    dessertsSP[0] = MenuItem("Blueberry Muffin", 2.50, DESSERT);
    dessertsSP[1] = MenuItem("Chocolate Muffin", 2.50, DESSERT);
    dessertsSP[2] = MenuItem("Lemon Muffin", 3.00, DESSERT);
    dessertsSP[3] = MenuItem("Cheese Cake", 3.50, DESSERT);
    dessertsSP[4] = MenuItem("Tiramisu Cake", 4.75, DESSERT);
    dessertsSP[5] = MenuItem("Beignet", 4.00, DESSERT);
    dessertsSP[6] = MenuItem("Carrot Cake", 2.70, DESSERT);

    // Display the menu using smart pointers
    displayMenu(hotDrinksSP, coldDrinksSP, dessertsSP);

    // Take the customer's order and calculate total price
    double total = takeOrder(hotDrinksSP, coldDrinksSP, dessertsSP);

    // Process the payment and show change
    processPayment(total);

    // Show the closing message
    closingMessage();

    return 0;
}
