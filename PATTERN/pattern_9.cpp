#include<iostream>
using namespace std;

///////////////////////////////////METHOD 1////////////////////////////////////////

// int main(){

//     int row;
//     cout<<"Please enter the number of rows";
//     cin>>row;

//     int i=1;
//     while(i<=row){
//         int j=1;
//         int count=i;
//         while(j<=i){
//             cout<<count<< " ";
//             count=count-1;
//             j=j+1;


//         }
//         cout<<endl;
//         i=i+1;

//     }

// }



//////////////////////////////////////////METHOD 2////////////////////////////////////////////

int main(){

    int row;
    cout<<"Please enter the number of rows";
    cin>>row;

    int i=1;
    while(i<=row){
        int j=1;
        while(j<=i){
            cout<<i-j+1<< " ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;




    }


}