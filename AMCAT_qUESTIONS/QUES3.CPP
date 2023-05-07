#include<iostream>
using namespace std;

int GCD_FUN(int num1,int num2){
    int gcd;
    for(int i=1;i<=num1 && i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;

        }
    }
    return gcd;
}

int LCM_FUN(int num1,int num2){
    int lcm=num1>num2?num1:num2;
    while(1){
        if(lcm%num1==0 && lcm%num2==0){
        break;
    }
    lcm++;
    
    }
    return lcm;
    
}

int main(){
    int num1 ;
    cout<<"please enter num1"<<endl;
    cin>>num1;
    int num2 ;
    cout<<"please enter num2"<<endl;
    cin>>num2;

    int gcd=GCD_FUN(num1,num2);
    cout<<"HCF is : "<<gcd<<endl;

    int lcm=LCM_FUN(num1,num2);
    cout<<"LCM is : "<<lcm;


}