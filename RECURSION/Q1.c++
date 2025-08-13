// print name from 1 to n using recursion
#include<iostream>
using namespace std;
int  Name(int n){
    if(n==0){
        return 0;
    }
    
     cout<<"calling from "<<n<<endl;
    Name(n-1);  
    cout<<"calling from "<<n<<endl;
     cout<<n<<" . Hello"<<endl;
   
}
 int main()
 {
  int num;
  cout<<"Enter number:";
  cin>>num;

 
  Name(num);
//   name(1,num);
 
  return 0;
 }