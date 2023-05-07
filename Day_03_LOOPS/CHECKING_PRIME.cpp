#include<iostream>
using namespace std;


int main(){

    int number;
    cout<<"Please enter the number";
    cin>>number;

    bool flag=true;

    for(int i=2;i<number/2;i++){
        if(number%i==0){
            flag=false;
            break;
        }
    }
    if( flag==false){
        cout<<"Not a prime number";
    }
    else{
        cout<<"It is a prime number";
    }



}