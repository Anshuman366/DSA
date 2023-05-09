#include<iostream>
using namespace std;


void update_arr(int arr[],int size){
    arr[0]=20;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[100]={3,-1,4};
    cout<<"Befor Updation"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After updation"<<endl;
    update_arr(arr,3);
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> PASS BY VALUE & PASS BY REFERENCE <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

//if u update any veriable from the function it will not get updated inside the main function because  a copy of thr 
// variable will be created inside the function which will not effect thr main variable

// but if u update any array in thr function the main array will be upfated necause koi bhi copy create nhi hoga function me
// jab bhi hum array pass krenge kisi function me then orignal arrau ka hi base address pass ho jaiga 
// this means ki agr function koi bhi change krega array k upar wo orignal array k upar hi hoga.