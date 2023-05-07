#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"please enete rthe number of rows"<<endl;
    cin>>row;
    int col;
    cout<<"Please enter the numbe of columns"<<endl;
    cin>>col;

    int i=1;
    while(i<=row){
        int j=1;
        int space=row-2;
        while(j<=col){
            if(i==1 ||i==col ||j==1 || j==col){
                cout<<"#";
            }
            else{
                
                    cout<<" ";


            }
            cout<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

// output




// # # # # # # # # # #
// #                 #
// #                 #                
// #                 #
// #                 #
// #                 #
// #                 #
// #                 #
// # # # # # # # # # #