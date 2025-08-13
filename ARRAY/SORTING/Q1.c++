// selection sorting 
#include <iostream>
using namespace std;  
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
   
}
int main()
{
    int  num;
    cout<<"Enter number of elements in array: ";
    cin>>num;   
    int arr[30];    
    for(int i=0;i<num;i++){
        cout<<"Enter "<<i+1<<" element:";
        cin>>arr[i];    
    }
    SelectionSort(arr, num);
    cout<<"Sorted array is: ";
    for (int i = 0; i < num; i++){
        cout<<arr[i]<<" ";  
    }
    
    
}