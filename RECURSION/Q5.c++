// print 1 to n even number 
#include<iostream>
using namespace std;    
void Even(int i,int n){
    if(i>n) return;
    // cout<<i<<endl;
    if(i%2 == 0) { // check if even
        cout << i << endl;
    }   
    // recursive call
    Even(i+1,n);
    
}
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num; 
    Even(0,num)  ;
}