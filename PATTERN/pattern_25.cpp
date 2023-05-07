#include<iostream>
using namespace std;


int main(){

    int row;
    cout<<"Please enter the number of rows u want to enter";
    cin>>row;

    int i=1;
    int count=1;
    while(i<=row){
        int j=row-i+1;
        while(j){
            cout<<count;
            count=count+1;
            j=j-1;
        }
        if(i!=1){
            int k=i-1;
            while(k<=i){
                cout<<'*';
                k=k+1;            
                }
        }
        else{
            continue;
            }
        }

        count=1;
        cout<<endl;
        i=i+1;
        }

        



