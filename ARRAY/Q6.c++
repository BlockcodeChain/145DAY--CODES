// Rotate array by 1 
#include<iostream>
using namespace std;    
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
int array[30];
for(int i=0;i<num;i++){
    cout<<"Enter "<<i+1<<" Element:";
    cin>>array[i];  
}
int temp=array[0];
for(int i=1;i<num;i++){
    array[i-1]=array[i];
}
array[num-1]=temp;
cout<<"Rotated array: ";    
for(int i=0;i<num;i++){
    cout<<array[i]<<" ";    
}
}