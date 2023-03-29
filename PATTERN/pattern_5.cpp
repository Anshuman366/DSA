#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of rows";
    cin>>row;

    // int col;
    // cout<<"Please enter the number of colums";
    // cin>>col;

    int i=1;
    while(i<=row){
        int j=0;
        while(j<i){      // jab row and column me relation dekhenge then we will find that ki jitna i ki value hai wo hi j ki value hai
            cout<<"*";
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }


}

// **
// ***
// ****
// *****
// ******
// *******
// ********