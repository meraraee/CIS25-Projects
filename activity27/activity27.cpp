#include <iostream>
#include <string>
using namespace std;

namespace BookstoreInventory {

    struct BookStoreRecords {
        string title;
        string address;
        string hours;
    };

    struct BookInformation {
        string title;
        string author;
        string genre;
        short price;
    };

    const int MAX_BOOKS = 10; // Define a maximum number of books
    BookInformation inventory[MAX_BOOKS]; // Array to store books
    int bookCount = 0; // To track the number of books added

    // Function to initialize some books
    void initializeBooks() {
        BookInformation book1 = {"The Samuarai's Garden", "Gail Tsukiyama", "Historical romance", 18};
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

// Function to add a book to the inventory
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


    // Function to find a book by title
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
}

int main() {
    // Instance of our structure (BookStoreRecords)
    BookstoreInventory::BookStoreRecords bookstore;

    // Initialize the bookstore
    BookstoreInventory::initializeBookStore(bookstore);

    // Initialize some books
    BookstoreInventory::initializeBooks();

    // Welcoming message for user
    cout << "Welcome to " << bookstore.title << endl;
    cout << "Location: " << bookstore.address << endl;
    cout << "Hours: " << bookstore.hours << endl;

    char choice;
    
    cout << "Add a book (A) or Find a Book (B): ";
    cin >> choice;
    choice = toupper(choice); // Convert to uppercase for consistency

    if (choice == 'A') {
        BookstoreInventory::addBook();
    } else if (choice == 'B') {
        BookstoreInventory::findBook();
    }

    return 0;
}

