// search insert position 
// Binary search in ascending order
#include<iostream>
using namespace std;
int Insert(int n,int arr[],int key){
    int s=0,e=n-1,mid,index=n;
    while(s<=e){
        // mid
        mid=s+(e-s)/2;
        if(arr[mid]==key){
            index=mid;
        }
        else if(arr[mid]>key){
            index=mid;
            e=mid-1;
        }
        else s=mid+1;
    }
    return index;
}
 int main()
 {
    int num;
    cout<<"Enter number of element in array:";
    cin>>num;
    int array[30];
    for(int i=0;i<num;i++){
        cout<<"Enter "<<i+1<<" Element:";
        cin>>array[i];
    }
    int target;
    cout<<"Enter Target:";
    cin>>target;
cout<<Insert(num, array,target);
 }