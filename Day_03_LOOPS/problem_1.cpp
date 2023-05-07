#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"How many digit number You want to enter";
    cin>>n;

    int number;
    cout<<"Please enter number";
    cin>>number;
    
    int arr[10];
    for(int i=0;i<n;i++){
        arr[i]=number%10;
        number=number/10;
    }
    int prod=1;
    int sum=0;
    for(int i=0;i<n;i++){
        prod=prod*arr[i];
        sum=sum+arr[i];
        
    }
    cout<<"Subtraction of product and addition is "<<prod-sum;

}