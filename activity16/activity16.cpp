#include "activity16.hpp"

#include <iostream>

using namespace std;


namespace AnalyzingGrades{

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


    void aboveAverageScore(int max, int low, int average, int grades[], int size){
    
        //finding ABOVE average
        cout << "Above Average Scores: ";
        for(int i = 0; i < 7;i++){
            
            if(grades[i] > average && grades[i] < max){
                cout << grades[i] << ", ";
            }
        }
        cout << endl;
        }

}
