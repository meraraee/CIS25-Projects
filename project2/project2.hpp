//
//  project2.hpp
//  CIS25
//


#ifndef project2_hpp
#define project2_hpp

#include <stdio.h>
#include <memory>
#include <string>


    // Enum for drink types
    enum DrinkType { HOT, COLD, DESSERT };

    struct MenuItem {
        std::string name;
        double price;
        DrinkType type;
        
        // Default constructor
        MenuItem() : name(""), price(0.0), type(HOT) {}
        
        // Parametrized constructor to initialize the MenuItem with values
        MenuItem(std::string n, double p, DrinkType t) : name(n), price(p), type(t) {}
    };

    // Function prototypes
    void displayMenu(std::unique_ptr<MenuItem[]>& hotDrinks,
                     std::unique_ptr<MenuItem[]>& coldDrinks,
                     std::unique_ptr<MenuItem[]>& desserts);

    double takeOrder(std::unique_ptr<MenuItem[]>& hotDrinks,
                     std::unique_ptr<MenuItem[]>& coldDrinks,
                     std::unique_ptr<MenuItem[]>& desserts);

    void processPayment(double total);

    void closingMessage();


#endif /* project2_hpp */
