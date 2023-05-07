#include<iostream>
using namespace std;

//An abundant number is a number for which the sum of its proper divisors is greater than the number itself.

int main(){
    
    int num ;
    cout<<"Please enter the number";
    cin>>num;

    int i;
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum>num){
        cout<<"Abundant";

    }
    else{
        cout<<"Not abundant";
    }

}