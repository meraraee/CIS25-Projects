BOOKSTORE INVENTORY SYSTEM
    
This is a C++ program that manages a bookstore inventory. It 
allows users to add new books and find exisiting books within the 
bookstore records.
    
    
Features:

Add a Book: Users can enter details about a new book, including the 
title, author, genre, and price.

Find a Book: Users can search for a book by its title and view its 
details if found.

Predefined Books: The system initializes with a few predefined books 
for demonstration purposes.


Structure:

The program is organized into two main structures:

BookStoreRecords: Holds information about the bookstore, including its 
title, address, and hours of operation.

BookInformation: Contains details about each book, such as title, 
author, genre, and price.

Constants:

MAX_BOOKS: Defines the maximum number of books that can be stored in the inventory (currently set to 10).

Functions:

initializeBooks: Preloads some sample books into the inventory.

initializeBookStore: Sets up the bookstore's basic information.

addBook: Prompts the user to enter details for a new book and adds it 
to the inventory.

findBook: Allows the user to search for a book by its title and 
displays its details.

