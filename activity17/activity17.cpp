#include <iostream>
using namespace std;

namespace LinearSearch{  //namespace convention
int linearSearch(){
    
    int arr[] = {2,4,5,7,20,11,17}; //int array
    int size = sizeof(arr)/ sizeof(int);  //size of our array to know how many times our loop should run
    int target = 7; //target value
    
    
    //using for loop to implement a linear search algorithm
    for(int i = 0; i < size; i++){
        
        if(arr[i] == target){
            return i; //return its index
            }
        }
    return -1;
    }

}

int main17(){

 LinearSearch::linearSearch(); //calling function in main

    return 0;
}


