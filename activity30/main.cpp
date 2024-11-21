//
//  main.cpp
//  CIS25
//
//  Created by Merary Murillo on 11/20/24.
//

#include <stdio.h>
#include "activity30.hpp"

int main(){
    
    //TextBox object
    Textbox :: TextBox textbox1;

    cout << "enter something to fill in the text: ";
    textbox1.input();
    
    cout << "text: " ;
    textbox1.output();
    
    cout << endl;
    
    return 0;
}
