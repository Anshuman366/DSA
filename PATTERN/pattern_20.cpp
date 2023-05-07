#include<iostream>
using namespace std;

int main(){

    int row;
    cout<<"Please enter the number of rows";
    cin>>row;

    int col=4;


    int i=1;
    while(i<=row){

        //to print the space
        char space=i-1;
        while(space){
            cout<<' ';
            space=space-1;
        }

        int j=row-i+1;
        cout<<j<<endl;
        while(j){
            cout<<'*';
            j=j-1;
        }
        cout<<endl;
        i=i+1;

    }

}

// ****
//  ***
//   **
//    *