#include<iostream>
using namespace std;


bool Linear_search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if (arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[100];
    int size,key;
    cout<<"Please enter the size of the array";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Please enter the key u want to search";
    cin>>key;

    bool result=Linear_search(arr,size,key);
    if(result){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
}


