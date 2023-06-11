#include<iostream>
using namespace std;


int reverse_alternate(int arr[],int size){
    int rev_arr[100];
    // int count=0;
    int i=0;
    while(i+1<size){
        int element=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=element;
        i=i+2;

    }
    cout<<"New array is: "<<endl;
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
}

int main(){
    // int arr[100];
    // int size,key;
    // cout<<"Please enter the size of the array";
    // cin>>size;
    // for(int i=0;i<size;i++){
    //     cin>>arr[i];
    
    // }
    int arr[100]={3,4,5,1,76,92,89,67};
    //{4,3,1,5,92,76,89}
    reverse_alternate(arr,8);
    
}



