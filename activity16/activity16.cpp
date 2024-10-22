#include <iostream>
using namespace std;


int highestScore(int grade[], int size){
    
    int max = grade[0];

    //finding hgihest score
    for(int i = 0; i < size; i++){
        
        if(grade[i] > max){
            max = grade[i];
        }
        
    }
    
    cout << "Highest Score: " << max << endl;
    
    return max;
}



int lowestScore(int grades[], int size){
    
    int low = grades[0];
    
    //finding lowest score
    for(int i = 0; i < size; i++){
        if(grades[i] < low){
            low = grades[i];
        }
    }
    
    cout << "Lowest Score: " << low << endl;
    
    return low;
}



double averageScore(int grades[], int size){
    
    int sum = 0;
    
    //adding scores
    for(int i = 0; i < size; i++){
        
        sum += grades[i];
    }
    
    //calculating average
    double average = sum / size;
    cout << "average: " << average << endl;
    
    return average;
}



void aboveAverageScore(int max, int low, int average, int grades[]){
    
    
    //finding ABOVE average
    cout << "Above Average Scores: ";
    for(int i = 0; i < 7;i++){
        
        if(grades[i] > average && grades[i] < max){
            cout << grades[i] << ", ";
        }
    }
     cout << endl;
}




int main16(){
    
//array s to store grades and ask for students name;
    string students[7];
    int grades[7];
    
    //loop gather soem info
    for(int i = 0; i < 7; i++){
        cout << "students name: ";
        cin >> students[0 + i];
        
        cout << students[0 + i] << "'s' grade: ";
        cin >> grades[0 + i];
        
        cout << endl;
        
    }
    
//calculating number of elements
    int size  = sizeof(grades) / 4;
    
//i've commented these because we are already calling it in the aboveAverage function
//If i were to cal these functions it will repeat twice, because whatever you call in main functino it will automatically output
    
//calling functions
    
//    highestScore(grades, size);
//
//    lowestScore(grades, size);
//
//    averageScore(grades, size);
    
aboveAverageScore(highestScore(grades, size), lowestScore(grades, size), averageScore(grades, size), grades);
    
      
    return 0;
    
}


