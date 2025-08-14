// : Print all numbers from 10 to n using recursion, where n will be greater than 10.
#include <iostream>
using namespace std;
void Print(int n){
    if(n<10) return;
    // recursive call
   
    Print(n-1); 
    cout << n << endl;  
}
int main(){
    int num;
    cout << "Enter a number greater than 10: ";
    cin >> num;
Print(num);
    
}