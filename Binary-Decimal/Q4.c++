// Write a program to convert Octal numbers to decimal numbers.
#include<iostream>
using namespace std;
 int main()
 {
    int num;
    cout<<"Enter number in Octal format:";
    cin>>num;
    int ans=0,base=1;
    while(num>0){
        int digit=num%10;
        ans+=digit*base;
        base*=8;
        num/=10;
    }
    cout<<ans;
 }