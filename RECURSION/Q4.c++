// print n to  1 backtrack using recursion
#include<iostream>
using namespace std;  

 int printback(int i,int n){
    if(i>n){
        return 0;
    }
    printback(i+1,n);
cout<<i<<endl;
 }
  
int main(){
int num;
cout<<"Enter number:";
cin>>num;   
printback(1,num);
}