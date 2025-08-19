// first ans last position of element in sorted array

#include<iostream>
#include<vector>
using namespace std;
vector<int> First_Last(int n,int arr[],int key){
    int s=0,e=n-1,mid,last=-1,first=-1;
    while(s<=e){
        // mid
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
    // last occurrence
    s=0,e=n-1;
      while(s<=e){
        // mid
        mid=s+(e-s)/2;
        if(arr[mid]==key){
           last=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else s=mid+1;
    }
return {first,last};

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
   vector<int>ans=First_Last(num,array,target);
   cout<<"["<<ans[0]<<" , "<<ans[1]<<"]"<<endl;
 }