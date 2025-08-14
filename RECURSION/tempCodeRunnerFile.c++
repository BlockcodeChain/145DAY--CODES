 // power of 4 leetcode
// Given an integer n, return true if it is a power of four. Otherwise, return false.
// An integer n is a power of four, if there exists an integer x such that n == 4x.
#include<iostream>
using namespace std;    
int Power(int i,int n){
    if(n==0) return 1;
    return n*Power(i,n-1);
}
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
   cout<< Power(4,n);
}