#include<iostream>
using namespace std;


int reverse(int arr[],int size){
    int rev_arr[100];
    int count=0;
    
    for(int i=size-1;i>=0;i--){
        rev_arr[count]=arr[i];
        count=count+1;
        
    }
    cout<<count<<endl;
    cout<<"Reversed array is :"<<endl;
    for(int i=0;i<size;i++){
        cout<<rev_arr[i]<<" ";
    
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
    int arr[100]={3,4,5,1,76,92,89};
    reverse(arr,7);
    
}



