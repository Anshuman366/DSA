#include<iostream>
#include<cmath>
using namespace std;

//Automorphic Number

int main(){
    int num;
    cout<<"Please enter the number";
    cin>>num;
    int square=num*num;
    cout<<"Square is:"<<square;
    string num1=to_string(num);
    int size1=num1.size();
    cout<<"size is : "<<size1<<endl;
    int divisor=pow(10,size1);
    cout<<"Divisor is :"<<pow(10,size1)<<endl;
    int last_digit=square%divisor;
    cout<<"last digit is : "<< last_digit <<endl;
    if(num==last_digit){
        cout<<"Automorphic Number";

    }
    else{
        cout<<"Not a Automorphic Number";
    }
}