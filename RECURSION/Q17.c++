// power of 4
#include <iostream>
using namespace std;   
int Power4(int i,int n){
    if(n==0) return 1;
    return i * Power4(i, n-1);
} 
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n; 
    cout<<Power4(4,n);
}