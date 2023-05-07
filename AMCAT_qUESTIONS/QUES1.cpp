#include<iostream>
using namespace std;

// FIND GCD OF A NUMBER

int main(){
    int gcd;

    int num1 ;
    cout<<"please enter num1"<<endl;
    cin>>num1;
    int num2 ;
    cout<<"please enter num2"<<endl;
    cin>>num2;

    for(int i=1;i<=num1 && i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;

        }

    }
    cout<<gcd;



}