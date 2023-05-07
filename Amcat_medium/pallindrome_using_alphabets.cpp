#include<iostream>
using namespace std;


int main(){

    int row;
    cout<<"Please enter the number of rows";
    cin>>row;

    int i=1;
    
    while(i<=row){
        int j=1;
        char alpha='A';
        while(j<=i){
            cout<<alpha<<" ";
            alpha=alpha+1;
            j=j+1;
        }

        if(i==1){
            cout<<" ";
        }
        else{
            int count1=i-1;
            char alpha1='A';
            //cout<<"alpha is : "<<alpha<<endl;
            char new_alpha=alpha1+i-2;
            //cout<<"new alpha is : "<<new_alpha<<endl;
            int j=i-1;
            while(j){
                cout<<new_alpha<<" ";
                j=j-1;
                new_alpha=new_alpha-1;
            }

        }

        cout<<endl;
        i=i+1;

    }



}


// A
// A B A
// A B C B A
// A B C D C B A