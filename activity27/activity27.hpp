#ifndef activity27_hpp
#define activity27_hpp

#include <stdio.h>
#include <string>


namespace BookstoreInventory {

// Structure to store bookstore information
struct BookStoreRecords {
    std::string title;
    std::string address;
    std::string hours;
};

// Structure to store individual book information
struct BookInformation {
    std::string title;
    std::string author;
    std::string genre;
    short price;
};

const int MAX_BOOKS = 10; // Define the maximum number of books

extern BookInformation inventory[MAX_BOOKS]; // Array to store books
extern int bookCount; // To track the number of books added

// Function to initialize some books
void initializeBooks();

// Function to initialize a bookstore record
void initializeBookStore(BookStoreRecords& bookstore);

// Function to add a book to the inventory
void addBook();

// Function to find a book by title
void findBook();

}

#endif /* activity27_hpp */

