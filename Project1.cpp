# Projects

Author: Merary Murillo 
Project: Rock, Paper, Scissors Game. 

[recording](https://youtu.be/V8yEiTfNt9o)

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


//Rock (1) Paper(2) Scissor(3)

//string function that will determine winner
string determineWinner(int userChoice, int computerChoice){
    
    //using if statement to determine winner
    
    if(userChoice == computerChoice){
        return "It's a Tie!!";
    }
    else if((userChoice == 1 && computerChoice == 3) ||            (userChoice == 2 && computerChoice == 1) ||            (userChoice == 3 && computerChoice == 2)){
        return "You Win!";
    }
    else{
            return "Computer Wins!";
    }
}


int main(){
    
    //random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    string choices [] = {"rock", "paper", "scissor"};  //use of Array to indicate our 3 choices
    
    bool playAgain = true;
    
    //statistics variables
    int wins = 0;
    int loses = 0;
    int tie = 0;
    
    cout << "Hello There! This is a Rock, Paper, Scissor Game." << endl;
    
    
    while(playAgain){
        
        int userChoice;
        cout << "Choose: Rock (1), Paper (2), Scissor (3) " << endl;
        cin >> userChoice;
        
        if(userChoice < 1 || userChoice > 3){
            
            cout << "Invalid choice. Please choose one of the given numbers: " << endl;
            cout << "Rock (1), Paper (2), Scissor (3): ";
            continue;
        }
    
    //developing random generator's choice
    int computerChoice;
    computerChoice = rand() % 3 + 1; //generating a random integer in RANGE OF 1 to 3
    
    //outputting results
    cout << "Your Choice: " << choices[userChoice - 1] << endl;
    cout << "Computer's Choice: " << choices[computerChoice - 1] << endl;
    
    
    //calling string function inside main
        cout << determineWinner(userChoice , computerChoice) << endl;
        string result = determineWinner(userChoice, computerChoice);
        
        if(result == "It's a Tie!!"){
            tie++;
        }
        else if(result == "You Win!"){
            wins++;
        }
        else{
            loses++;
        }
        
    //displaying statistcs
        cout << "Tie: " << tie << endl;
        cout << "Wins: " << wins << endl;
        cout << "Loses: " << loses << endl;
        
        
        
    //asking user if they want to play again, using char: Y or N
    char response;
    cout << "Play again? (y/n): ";
    cin >> response;
    playAgain = (response == 'y');
    
}

cout << "Thank you for playing! Have a wonderful day." << endl;

    return 0;
}
