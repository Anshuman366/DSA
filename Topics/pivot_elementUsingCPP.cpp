#include<iostream>
using namespace std;

int main(){

        int arr[10]={4,5,6,7,8,1,2,3};
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
        cout<<start;



}
// phle hum mid nikalenge then hum compare krenge ki first jo element hai arr[0] usse nid bada hai ki ni because 
//agr bada hoga then hum forst line me hai otherwise hum second line me hain
//if hum else wale condition me aa gaaye then hum second line me aa gai 
//ab hume end ko piche le kr ana padega .. means hume end=mid krna padega