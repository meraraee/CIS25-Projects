//
//  activity30.hpp
//  CIS25
//
//  Created by Merary Murillo on 11/20/24.
//

#ifndef activity30_hpp
#define activity30_hpp

#include <stdio.h>

#include <iostream>

using namespace std;


namespace Textbox{

    class TextBox{
        
    public:
        
        //default constructor
        TextBox(){
            value = "";
        }
        
        explicit TextBox(const string& text){  //text is our string object
            value = text;   //making sure our class is used "properly" by making it usable
        }
        
        
        // Member function to accept input
        void input() {
            
            cin >> value;  // Take input directly into the 'value' string
        }

        
        // Member function to output the TextBox content
        void output() const {
            
            cout << value;  // Print the value of the TextBox
        }
        
        
    private:
        
        string value;   //our private string attribute
    };


}

#endif /* activity30_hpp */
