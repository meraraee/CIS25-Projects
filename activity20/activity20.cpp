#include <iostream>
using namespace std;

namespace SumCalculator{
    int total(int arr1[], int sizee){
        
        int summ = 0; //variable to store in all integers
        
        for(int i = 0; i < sizee; i++){ //loop to add in all integers
            summ += arr1[i];
            
        }
        
        cout << "the sum is: " << summ << endl;
        
        return summ;
        
    }
}

int main20(){
    
    int num; //int variable to store how many numbers inputted
    
    cout << "type in a few integers" << endl;
    cout << "how many integers will you be inserting? ";
    cin >> num;
    
    //array for list of numbers inputted
    int arr[num];
    
    
    int i = 0;
    
    //adding list of numbers altogether
    while(i < num){
        cout << "int: ";
        cin >> arr[i];
        
        i++;
    }
    
    SumCalculator::total(arr, num);
    
    return 0;
}
