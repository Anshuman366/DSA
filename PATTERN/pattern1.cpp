#include<iostream>
using namespace std;

int main(){
    int row;
    cout<< "Please enter the row You want to print";
    cin>> row;

    int col;
    cout<< "Please enter the column You want to print";
    cin>>col;

    int i=0;
    
    while(i<row){

        int j=0;
        while(j<col){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}