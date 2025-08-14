// Write a program to convert binary numbers to decimal numbers using a for loop.
#include <iostream>
using namespace std;        
int main()
{
    int num,ans=0,base=1;
    cout<<"Enter number in binary format: ";
    cin>>num;
    while(num>0){
       int digit =num%10;
       ans+=digit*base;
       base *=2;
       num/=10;
    }
    cout<<ans;
}