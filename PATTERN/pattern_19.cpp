#include<iostream>
using namespace std;

int main(){

    int row;
    cout<<"Pleas enter the number of rows";
    cin>>row;


    
    int i=1;
    while(i<=row){
        // To print the space
        char str=(row-i);
        while(str){
            cout<<' ';
            str=str-1;


        }

        // to print the star
        int j=1;
        while(j<=i){
            cout<<'*';
            j=j+1;
        }

        cout<<endl;

        i=i+1;
    }
}


//    *
//   **
//  ***
// ****