//
//  activity27.hpp
//  CIS25
//

#ifndef activity27_hpp
#define activity27_hpp

#include <stdio.h>

namespace Bookstoreinventory{

struct BookStoreRecords{
    string title;
    string address;
    string hours;
};

struct BookInformation{
    string title;
    string author;
    string genre;
    short price;
};


const int MAX_BOOKS = 10;

void intializeBooks();
void initialzeBookstore(BookStorerecords& bookstore);
void addBook();
void findBook();

}


#endif /* activity27_hpp */
