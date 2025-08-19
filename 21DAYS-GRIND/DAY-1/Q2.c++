// Binary search in descending order
#include<iostream>
using namespace std;
int BInary_Descending(int n,int arr[],int key){
    int s=0,e=n-1,mid;
    while(s<=e){
//   mid
  mid=s+(e-s)/2;
  if(arr[mid]==key){
    return mid;
  }
  else if(arr[mid]>key){
    s=mid+1;
  }
  else e=mid-1;
    }
    return -1;
}
 int main()
 {
    int num;
    cout<<"Enter number of element in array :";
    cin>>num;
    int array[30];
    for(int i=0;i<num;i++){
        cout<<"Enter "<<i+1<<" Element:";
        cin>>array[i];
    }
    int target;
    cout<<"Enter Target:";
    cin>>target;
   cout<< BInary_Descending(num,array,target);
 }