#include<iostream>
using namespace std;
#include<cmath>

// Decimal to binary


int main(){
    int num;
    cout<<"Please enter the number in binary format";
    cin>>num;

    int temp=num;
    int sum=0;
    int size_of_num=to_string(num).size();
    int i=0;
    while(temp!=0){
        int last_digit=temp%10;
        sum=sum+(last_digit*pow(2,i));
        i=i+1;
        temp=temp/10;
             
        }
    cout<<sum;

    }
