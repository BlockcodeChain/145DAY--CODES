// print odd numebr from 1 to n
#include<iostream>
using namespace std;  
void Odd(int i,int n){
    if(i>n) return;
     cout<<i<<endl;
    //    if (i % 2 != 0) { // check if odd
    //     cout << i << endl;
    // }
    Odd(i+1,n);
   
}      
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num; 
    Odd(1,num);
}