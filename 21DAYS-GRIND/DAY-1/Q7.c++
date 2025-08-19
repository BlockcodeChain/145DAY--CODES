// no of occurence of target
// 2 4 4 4 4 5 6 ans =4

#include<iostream>

using namespace std;
int Occurence(int n ,int arr[],int key){
int s=0 , e=n-1,mid,first=-1,last=-1;
// first  occurnece
while(s<=e){
    mid=s+(e-s)/2;
    if(arr[mid]==key){
  first=mid;
  e=mid-1;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else s=mid+1;
}
s=0,e=n-1;
// last  occurnece
while(s<=e){
    mid=s+(e-s)/2;
    if(arr[mid]==key){
last =mid;
  s=mid+1;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else s=mid+1;
}
if(first == -1 || last == -1) return 0; // element not found
    return (last - first + 1);
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
    int ans=Occurence(num,array,target);
    cout<<"Number of occurence of "<<target<<" : "<<ans;
 
 }