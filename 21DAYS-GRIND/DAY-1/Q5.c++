// sqrt (x)  e.g 95 output 9
// search insert position 
// Binary search in ascending order
#include<iostream>
using namespace std;
int SquareRoot(int n){
    int s=0,e=n,mid,ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(mid*mid==n){
        ans=mid;
        }
        else if(mid*mid<n){
        ans=mid;
          s=mid+1;
        }
        else e=mid-1;

    }
    return ans;
}

 int main()
 {
    int num;
    cout<<"Enter number:";
    cin>>num;
   cout<< SquareRoot(num);


 }