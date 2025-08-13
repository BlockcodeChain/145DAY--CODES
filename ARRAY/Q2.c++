// linear search 
#include<iostream>
using namespace std;
 int main()
 {
    int num;
    cout<<"Enter number:";
    cin>>num;
    int array[30];
    for(int i=0;i<num;i++){
        cout<<"Enter "<<i+1<<" Element:";
        cin>>array[i];
    }
    int key;
    cout<<"Enter target element to search:";
    cin>>key;
    int index=-1;
    for(int i=0;i<num;i++){
        if(array[i]==key){
            index=i;
            break;
        }
    }
    cout<<"Elemnt found at index: "<<index<<endl;
    return 0;
 }