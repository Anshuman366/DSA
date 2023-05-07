#include<iostream>
using namespace std;

//Fibonacci series is a series in which each number is the sum of the last two preceding


int main(){
    int num;
    cout<<"Please enter the number";
    cin>>num;

    int first=0;
    int second=1;
    cout<<first<<endl;
    

    for(int i=1;i<num;i++){

        int sum=first+second;
        cout<<sum<<endl;
        first=second;
        second=sum;

    }

}