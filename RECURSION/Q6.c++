// print 1 to n
#include<iostream>
using namespace std;
void Print(int i, int n){
    if(i>n) return ;

    cout<<i<<endl;
    Print(i+1,n);
}
int main(){
    int num;
    cout<<"Enter number:";  
    cin>>num;
    Print(1,num);
}