#include <iostream>
#include <iomanip> //to utilize left and right & setw()

int main04() {
    
    
    // Setting up column titles
    std::cout << std::left << std::setw(15) << "Course" << std::right << std::setw(10) << "Students" << std::endl;
   
    std:: cout << std:: endl;

    // Printing rows/courses
    std::cout << std::left << std::setw(15) << "C++" << std::right << std::setw(10) << 100 << std::endl;
    std::cout << std::left << std::setw(15) << "JavaScript" << std::right << std::setw(10) << 50 << std::endl;


    return 0;
}
