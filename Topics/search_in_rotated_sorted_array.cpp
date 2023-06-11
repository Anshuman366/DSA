#include<iostream>
using  namespace std;


int getPivot(int arr[]){
        int start=0;
        int end=7;
        
        while(start<end){
            int mid=(start+end)/2;
            

            if(arr[mid]>=arr[0]){
                start=mid+1;
                

            }
            else{
                end=mid;
            }
            
        }
        return start;
}

int Binary_search(int arr,int element){

        //int arr[10]={1,2,3,4,5,6,7,8};
        int start=0;
        int end=7;
        
        //int element=7;

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
                return mid;
                break;
            }
            // start=start+1;
            // end=end-1;

        }

}





int main(){
    int arr[10]={4,5,6,7,8,1,2,3};
    int pivot=getPivot(arr);
    cout<<pivot;


}