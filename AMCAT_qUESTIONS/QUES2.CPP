#include<iostream>
using namespace std;

// find lcm of two numbers

int main(){
    int num1 ;
    cout<<"please enter num1"<<endl;
    cin>>num1;
    int num2 ;
    cout<<"please enter num2"<<endl;
    cin>>num2;

    int lcm=(num1>num2) ? num1:num2;

    while(1){
        if (lcm%num1==0 && lcm%num2==0){
            break;
        }
        lcm++;
        
    }
    cout<<lcm;




}