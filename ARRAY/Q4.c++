// reverse an array
#include<iostream>
using namespace std;  
void ReverseArray(int n,int arr[]){
    int start=0,end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}      
int main()
{
    int num;
    cout<<"Enter number of elements in array: ";
    cin >> num;
    int array[30];
    for(int i=0;i<num;i++){
        cout<<"Enter "<<i+1<<" Element:";
        cin>>array[i];
    }
    cout<<"Original array: ";
      for(int i=0;i<num;i++){
        cout<<array[i]<<" ";
    }
    cout << endl;
    cout<<"Reversed array: ";
    ReverseArray(num,array);
    for(int i=0;i<num;i++){
        cout<<array[i]<<" ";
    }

}