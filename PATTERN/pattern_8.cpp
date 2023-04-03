#include<iostream>
using namespace std;

// int main(){

//     int row;
//     cout<<"Please enter the number of row";
//     cin>>row;

//     int i=1;
//  //   int count=0;
//     while(i<=row){
//         int j=1;
//         //int count=i;
//         while(j<=i){
//             cout<<i+j-1<<" ";

//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }

// }

///////////////////////////////OUTPUT////////////////////////////////////////

// 1
// 2 3
// 3 4 5
// 4 5 6 7

////////////////////////////////////METHOD 2/////////////////////////////////////////////////

int main(){

    int row;
    cout<<"Please enter the number of row";
    cin>>row;

    int i=1;
 //   int count=0;
    while(i<=row){
        int j=1;
        int count=i;
        while(j<=i){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}