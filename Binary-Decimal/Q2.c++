// Write a program to convert decimal numbers to binary numbers using a for loop.
#include<iostream>
using namespace std;
int  main()
{
    int num;
    cout<<"Enter number in decimal format :";
    cin>>num;
    int ans=0,base=1;
    while(num>0){
        int digit=num%2;
        ans+=digit*base;
        base*=10;
        num/=2;
    }
    cout<<ans;
}