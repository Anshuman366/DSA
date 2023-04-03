#include<iostream>
using namespace std;

int main(){

    int row;
    cout<<"Please enter number of rows";
    cin>>row;

    int i=1;
    char str='A';
    while(i<=row){
        int j=1;
        char str1=str;
        while(j<=i){
            cout<<str1;
            j=j+1;
            str1=str1+1;

        }
        cout<<endl;
        i=i+1;
        str=str+1;
    }

}


// A
// BC
// CDE
// DEFG