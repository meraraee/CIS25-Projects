#include <iostream>
using namespace std;

int main07(){
    
    
    string name1, name2, name3;
    
    cout << "Type in 3 names: " << endl;
    
    cout << "Name 1: ";
    cin >> name1;
    
    cout << "Name 2: ";
    cin >> name2;
    
    cout << "Name 3: ";
    cin >> name3;
    
    
    string nameArray[] = {name1, name2, name3};
    
    cout << nameArray[0] << endl;
    return 0;
}
