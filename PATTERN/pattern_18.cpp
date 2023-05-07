#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Please enter the number of rows";
    cin>>row;

    int col;
    cout<<"Please enter the number of column";
    cin>>col;

    char d='A';
    int i=1;
    while(i<=row){
        int j=1;
        
        char str=d+row-i;

        while(j<=col){
            cout<<str;
            j=j+1;
            str=str+1;


        }
        cout<<endl;
        i=i+1;
    }
}

// DEFG
// CDEF
// BCDE
// ABCD