#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap01(int arr[100],int n){
    int i=0;
    int j=n;
    while(i<=j){
        if(arr[i]==0 && i<j){
            i++;

        }
        if(arr[j]==1 && i<j){
            j--;
        }
        if(arr[i]!=0 && arr[j]!=1 && i<j){

            swap(arr[i],arr[j]);
        }
       
        i=i+1;
        j=j-1;
    }

}

int main(){
    int arr[10]={1,1,1,0,1,0,1,0};
    swap01(arr,8);
    printArr(arr,8);
}