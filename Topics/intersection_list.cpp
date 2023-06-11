#include<iostream>
using namespace std;

int find_intersection(int arr1[10],int arr2[10]){
    for(int i=0;i<=7;i++){
        for(int j=0;j<5;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr2[j]<<" ";
                arr2[j]='h';
                break;
            }
        }
    }
}

int main(){
    int arr1[10]={1,2,3,4,4,5,5};
    int arr2[10]={2,2,3,4,5};
    find_intersection(arr1,arr2);
}