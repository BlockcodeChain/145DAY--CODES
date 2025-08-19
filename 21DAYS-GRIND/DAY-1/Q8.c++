// Peak index in mountain 2 4 6 8 10 1 2 


#include<iostream>

using namespace std;
int Peak_Mountain(int n,int arr[]){
int s=0,e=n-1,mid;
while(s<e){
        mid = s+(e-s)/2;

        // agar mid ki value uske next se badi hai
        // iska matlab peak left side me ya mid hi ho sakta hai
        if(arr[mid] > arr[mid+1]){
            e = mid;
        }
        else{
            // agar mid chhota hai next se
            // iska matlab peak right side me hai
            s = mid+1;
        }
    }
    return s;
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
  
  cout<<Peak_Mountain(num,array);
 }