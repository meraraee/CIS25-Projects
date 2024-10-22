#include <iostream>

using namespace std;

int main09() {
    
    
    string citizen;
    string bachelorsDegree;
    int yearsOfExperience;
    
    // get data from the user
    cout << "Are you a US citizen? ";
    cin >> citizen;
    
    cout << "Do you have a bachelor's degree? ";
    cin >> bachelorsDegree;
    
    cout << "How many years of experience do you have? ";
    cin >> yearsOfExperience;
    
    //bool for true or false eligibilty
    bool eligible = false;
    
    // Checking for eligibility
    //first it checks if user is citizen before going into condition
    if (citizen == "yes") {
        
        if (bachelorsDegree == "yes" || yearsOfExperience >= 2) {
            eligible = true;
        }
    }
    
    // Outputing result
    if (eligible) {
        cout << "You are eligible for the job!" << endl;
    } else {
        cout << "Sorry, you are not eligible for the job." << endl;
    }

    return 0;
}
