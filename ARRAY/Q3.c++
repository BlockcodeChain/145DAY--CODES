// find minimum and maximum element in an array
#include<iostream>  
#include<climits> // for INT_MAX and INT_MIN
using namespace std;    
int main()
{
    int num;
    cout << "Enter number of elements in array: ";
    cin >> num; 
    int array[30];
    for(int i=0;i<num;i++){
        cout<<"Enter "<<i+1<<" Element:";
        cin>>array[i];

    }
    int  max=INT_MIN, min=INT_MAX;
    for(int i=0;i<num;i++){
        if(max<array[i]){
            max=array[i];
        }
         if(min>array[i]){
            min=array[i];
        }
    }
    cout<<"Maximum element in array: "<<max<<endl;
    cout<<"Minimum element in array: "<<min<<endl;

}