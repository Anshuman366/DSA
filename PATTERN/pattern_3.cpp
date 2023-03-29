#include<iostream>
using namespace std;

int main(){

    int row;
    cout<<"Please enter the number of row";
    cin>>row;

    int col;
    cout<<"Please enter the number of column";
    cin>>col;

    int i=0;
    while(i<row){
        int j=0;
        while(j<col){
            cout<<j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }


}