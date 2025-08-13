// Poer of 2
#include<iostream>
using namespace std;  
int  Power(int i,int n){
    if(n==0) return 1;
    return i* Power(i,n-1);
}
int main(){
    int n;
    cout << "Enter a number: "; 
    cin>>n;
    cout<<Power(2,n);
}