// Write a Table program using recursion. Take input number n, and print its table. 

#include <iostream>
using namespace std;   
void Table(int i,int n){
    if(i>10) return;
    // Table(i + 1, n);  //reversely print kregga

    cout << n << " * " << i << " = " << n * i << endl;
    Table(i + 1, n);
} 
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Table(1,n);
}