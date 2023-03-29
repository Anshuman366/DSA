#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"please enter the number of rows";
    cin>>row;

    int col;
    cout<<"Please enter the number of column ";
    cin>>col;

    int i=0;
    while(i<row){
        //cout<< 1;
        int j=0;
        while(j<col){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

//output

// 0000
// 1111
// 2222
// 3333