#include<iostream>
using namespace std;

int main(){

        int arr[10]={1,2,3,4,5,6,7,8};
        int start=0;
        int end=7;
        
        int element=7;

        while(start<=end){
            int mid=(start+end)/2;
            // cout<<mid<<endl;
            if(element<arr[mid]){
                // cout<<"element<arr[mid]"<<element<<" "<<arr[mid]<<endl<<endl;
                end=mid-1;
            }
            else if(element>arr[mid]){
                //  cout<<"element>arr[mid]"<<element<<" "<<arr[mid];
                start=mid+1;
            }
            else{
                cout<<mid;
                break;
            }
            // start=start+1;
            // end=end-1;

        }









}