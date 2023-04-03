#include<iostream>
using namespace std;


int main(){

        int row;
        cout<<"please enter the number of rows";
        cin>>row;

        int col;
        cout<<"Please enter the number of column";
        cin>>col;

        int i=1;
        char str='A'; //declare it outside otherwise wo bar bar A hi display kreg

        while(i<=row){

            //cout<<"value of i "<<i;
            int j=1;
            
            while(j<=col){
                cout<<str;
                j=j+1;

            }
            str=str+1;
            cout<<endl;
            i=i+1;

        }
}

// AAAA
// BBBB
// CCCC
// DDDD