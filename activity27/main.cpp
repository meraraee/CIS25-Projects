#include "activity27.hpp"
#include <iostream>
#include <cctype>  // For toupper()

using namespace std;


int main27() {
    // instance of our structure (BookStoreRecords)
    BookstoreInventory::BookStoreRecords bookstore;

    // Initialize the bookstore
    BookstoreInventory::initializeBookStore(bookstore);  // Ensures this matches the header

    // initialize some books
    BookstoreInventory::initializeBooks();

    // welcoming bookstore info message for user
    cout << "Welcome to " << bookstore.title << endl;
    cout << "Location: " << bookstore.address << endl;
    cout << "Hours: " << bookstore.hours << endl;

    char choice;
    
    cout << "Add a book (A) or Find a Book (B): ";
    cin >> choice;
    choice = toupper(choice); //converts to uppercase

    if (choice == 'A') {
        BookstoreInventory::addBook();
    } else if (choice == 'B') {
        BookstoreInventory::findBook();
    }

    return 0;
}
