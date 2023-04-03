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
        while(j<=i){
            cout<<str;
            j=j+1;
            str=str+1;

        }
        cout<<endl;
        i=i+1;
        
    }

}


// A
// BC
// DEF
// GHIJ