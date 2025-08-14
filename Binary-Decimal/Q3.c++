// Write a program to convert decimal numbers to Octal numbers.
#include<iostream>
using namespace std;
int  main()
{
    int num;
    cout<<"Enter number in decimal format :";
    cin>>num;
    int ans=0,base=1;
    while(num>0){
        int digit=num%8;
        ans+=digit*base;
        base*=10;
        num/=8;
    }
    cout<<ans;
}