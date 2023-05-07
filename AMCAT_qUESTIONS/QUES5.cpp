#include<iostream>
using namespace std;

//function to calculate the factorial
int factorial(int num){
    int fact=1;
    if(num==0 || num==1){
        return num;
    }
    else{
        //int i=2;
        for(int i=2;i<=num;i++){
            fact=fact*i;
        }
    }
    //cout<<"Factorial is : "<<fact;
    return fact;
    
}

//function to calculate thr sum of factorial of digit
int DIGIT_FACT_SUM(int num){
    int temp=num;
    int fact_sum=0;
    while(temp!=0){
        int digit=temp%10;
        //cout<<"last digit: "<<digit;
        int fact=factorial(digit);
        fact_sum=fact_sum+fact;
        
        temp=temp/10;
    }
    //cout<<"Factorial sum is : "<<fact_sum;
    return fact_sum;


}

int main(){
    int num;
    cout<<"input number";
    cin>>num;
    int result=DIGIT_FACT_SUM(num);
    if(result==num){
        cout<<"Strong number";

    }
    else{
        cout<<"Not a strong number";
    }

}