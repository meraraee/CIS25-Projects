#include <iostream>
#include <cctype> //to utilize isalpha()

using namespace std;



namespace Validation{   //namespace convention

    //A boolean function is best suited for customer number validation because it clearly indicates validity with a simple true or false return, making the code easy to read and maintain.

    // passing the string by reference(&) while ensuring that the function does not modify it(const)

    bool validate(const string &customerNumber){
        
        //checking if characters is exactly 6
        if(customerNumber.length() != 6){
            return false;
        }
        
        //checking if the first character (customerNumber[0]) is not an alphabetic letter or. The second character (customerNumber[1]) is not an alphabetic letter.
        if(!isalpha(customerNumber[0]) || !isalpha(customerNumber[1])){
            return false;
        }
        
        // loop to check if the last four characters are digits
        for(int i = 2; i < 6; ++i) {
            if (!isdigit(customerNumber[i])){
                return false;
            }
        }
        
        return true;
    }
}

    int main23(){
        
        //variable to store users input
        string customerNumber;
        
        cout << "Type in 2 alphabetic characters, followed by 4 digits: " << endl;
        cin >> customerNumber;
        
        //reads an entire line of input from the standard input stream (cin) and stores it in the string variable customerNumber
        // It allows users to enter input that may contain spaces, as opposed to cin >> customerNumber, which stops reading at the first whitespace. It captures everything the user types until they hit Enter.
        
        if(Validation::validate(customerNumber)){ //if validate(customerNumber = true, it will cout valid, BUT if validate(customerNumber = false, it will cout invalid
            cout << "Customer Number is Valid." << endl;
        }
        else{
            cout << "Customer Number is Invalid. " << endl;
        }
        
        return 0;
    }


