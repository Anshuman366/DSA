#include<iostream>
using namespace std;

// FIBBONACI SERIES
int main(){
    int number;
    cout<<"Please enter the number for series";
    cin>>number;

    int a=0;
    int b=1;

    for(int i=0;i<=number;i++){
        int sum=a+b;
        cout<<a+b<<endl;
        a=b;
        b=sum;

    }

}

