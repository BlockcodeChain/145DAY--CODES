// print form n to 1 using recursion
#include<iostream>  
using namespace std;
int PrintReverse(int n) {   
    if(n == 0) {
        return 0;
    }
    
    cout << n << endl;
    PrintReverse(n - 1);
}   
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; 
    PrintReverse(n);
}   