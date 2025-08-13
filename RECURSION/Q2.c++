// print 1 to n using one argument 
#include<iostream>
using namespace std;   
void Print(int n){
    if(n==0 )return ;
    Print(n-1);
    cout<<n<<endl;
}
int main(){
    int num;
    cout<<"Enter number:";  
    cin>>num;
    Print(num);
}