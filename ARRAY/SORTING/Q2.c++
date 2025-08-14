// Bubble Sort
#include <iostream>
using namespace std;    
void BubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main()
{
    int num;
    cout<<"Enter number of elements in array: ";
    cin>>num;
    int arr[30];    
    for(int i=0;i<num;i++){ 
        cout<<"Enter "<<i+1<<" element: ";
        cin>>arr[i];    
    }
    BubbleSort(arr, num);
    for(int i = 0; i < num; i++){
        cout<<arr[i]<<" ";  
    }
}