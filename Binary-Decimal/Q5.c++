// Write a program to convert binary to Octal numbers
#include<iostream>
using namespace std;
 int main()
 {
    int num;
    cout<<"Enter number in binary  format:";
    cin>>num;
    int ans=0,base=1;
    while(num>0){
        int digit=num%10;
        ans+=digit*base;
        base*=2;
        num/=10;
    }
    int result=0;
    base=1;
    while(ans>0){
        int digit=ans%8;
        result+=digit*base;
        base*=10;
        ans/=8;
    }
    cout<<result;
 }