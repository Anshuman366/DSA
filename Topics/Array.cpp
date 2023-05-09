#include<iostream>
using  namespace std;

void Print_arr(int arr[],int size){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";

    }
}

int main(){
    int s,arr[100];
    cout<<"Please enter the size of the array"<<endl;
    cin>>s;
    cout<<"Please enter the elements of the array"<<endl;
    for(int i=1;i<=s;i++){
        cin>>arr[i];
    }
    // for(int i=1;i<=s;i++){
    //     cout<<arr[i];
    // }
    //cout<<"Element is :"<<arr;
    Print_arr(arr,s);
}