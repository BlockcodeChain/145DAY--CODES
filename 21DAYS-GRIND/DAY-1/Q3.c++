// Binary search in ascending order
#include<iostream>
using namespace std;
int Binary_Search(int n,int arr[],int key){
    int s=0,e=n-1,mid;
    bool isAscending =arr[0]<arr[n-1];
    while(s<=e){
        mid=s+(e-s)/2;
  if(arr[mid]==key){
    return mid;
  }
  else if(isAscending){
    if(arr[mid]>key){
        e=mid-1;
    }
    else s=mid+1;
  }
  else if(!isAscending){
    if(arr[mid]>key){
        s=mid+1;
    }
    else e=mid-1;
  }
 

}
    return -1;
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
   cout<< Binary_Search(num,array,target);
 }