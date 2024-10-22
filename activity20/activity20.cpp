#include <iostream>
using namespace std;


int total(int arr1[], int sizee){
    
    int summ = 0; //variable to store in all integers
    
    for(int i = 0; i < sizee; i++){ //loop to add in all integers
        summ += arr1[i];
        
    }
 
    cout << "the sum is: " << summ << endl;
    
    return summ;
    
}

int main20(){
    
    int num;
    
    cout << "type in a few integers" << endl;
    cout << "how many integers will you be inserting? ";
    cin >> num;
    
    int arr[num];
    
    
    int i = 0;
    
    while(i < num){
        cout << "int: ";
        cin >> arr[i];
        
        i++;
    }
    
    total(arr, num);
    
    return 0;
}
