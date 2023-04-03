#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Please enter the number of rows";
    cin>>row;

    int col;
    cout<<"Please enter number of column";
    cin>>col;

    int i=1;
    char str1='A';
    while(i<=row){
        int j=1;
        while(j<=i){
            char x=str1;
            cout<<x<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        str1=str1+1;
    }

}

// A
// B B
// C C C
// D D D D