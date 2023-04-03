#include<iostream>
using namespace std;


int main(){

    int row;
    cout<<"Please enter the number of row";
    cin>>row;

    int col;
    cout<<"Please enter the number of column";
    cin>>col;

    int i=1;

    while(i<=row){

        int j=1;
        char str='A';
        while(j<=col){
            //char str='A'+i+j-1;
            cout<<str;
            str=str+1;
            //str=str+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }




}