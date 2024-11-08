
#include "activity27.hpp"
#include <iostream>
#include <cctype>  // For toupper()

using namespace std;

namespace BookstoreInventory {

// Initialize the global array of books and the book count variable
BookInformation inventory[MAX_BOOKS]; // Array to store books
int bookCount = 0; // To track the number of books added

// Function to initialize some books in the inventory
void initializeBooks() {
    BookInformation book1 = {"The Samurai's Garden", "Gail Tsukiyama", "Historical romance", 18};
    BookInformation book2 = {"Smile", "Raina Telgemeier", "Graphic Novel", 15};
    BookInformation book3 = {"The City of Ember", "Jeanne DuPrau", "Fantasy Fiction", 10};
    
    // Add the predefined books to the inventory
    inventory[bookCount++] = book1;
    inventory[bookCount++] = book2;
    inventory[bookCount++] = book3;
}

// Function to initialize a bookstore record
void initializeBookStore(BookStoreRecords& bookstore) {
    bookstore.title = "The Bookery";
    bookstore.address = "700 Main St, Crescent Valley";
    bookstore.hours = "8am - 7pm";
}

// Function to add a new book to the inventory
void addBook() {
    char continueAdding = 'Y';
    while (continueAdding == 'Y') {
        if (bookCount < MAX_BOOKS) {
            BookInformation newBook;
            
            // Collecting book information from the user
            cout << "Enter book title: ";
            cin.ignore(); // Clear the input buffer
            getline(cin, newBook.title);
            
            cout << "Enter author: ";
            getline(cin, newBook.author);
            
            cout << "Enter genre: ";
            getline(cin, newBook.genre);
            
            cout << "Enter price: ";
            cin >> newBook.price;
            
            // Add the new book to the inventory
            inventory[bookCount++] = newBook; // Add book and increment count
            cout << "Book added successfully!" << endl;
        } else {
            cout << "Inventory full! Cannot add more books." << endl;
            break;
        }
        
        cout << "Would you like to add another book? (Y/N): ";
        cin >> continueAdding;
        continueAdding = toupper(continueAdding); // Convert to uppercase for consistency
    }
}

// Function to find and display a book by title
void findBook() {
    string searchTitle;
    cout << "Enter the title of the book to find: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, searchTitle);
    
    // Search for the book in the inventory
    for (int i = 0; i < bookCount; i++) {
        if (inventory[i].title == searchTitle) {
            cout << "Book found!" << endl;
            cout << "Title: " << inventory[i].title << endl;
            cout << "Author: " << inventory[i].author << endl;
            cout << "Genre: " << inventory[i].genre << endl;
            cout << "Price: $" << inventory[i].price << endl;
            return; // Exit the function after finding the book
        }
    }
    
    cout << "Book not found in the inventory." << endl; // If not found
}

} // End of namespace BookstoreInventory
