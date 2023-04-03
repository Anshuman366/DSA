#include<iostream>
using namespace std;

// int main(){

//     int row;
//     cout<<"Please enter number of rows";
//     cin>>row;

//     int col;
//     cout<<"Please enter the number of col";
//     cin>>col;

//     int i=1;
//     char str1='A';
//     while(i<=row){
//         int j=1;
//         char str2=str1;
//         while(j<=col){
//             cout<<str2;
//             str2=str2+1;
//             j=j+1;
            

//         }
//         str1=str1+1;
//         cout<<endl;
//         i=i+1;
//     }

//}

// ABCDE
// BCDEF
// CDEFG
// DEFGH
// EFGHI

int main(){
    int row;
    cout<<"Please enter number of rows";
    cin>>row;

    int col;
    cout<<"Please enter the number of col";
    cin>>col;

    int i=1;
    //char str1='A';
    while(i<=row){
        int j=1;
        char str='A';
        while(j<=col){

            char x=str+i+j-2;
            cout<<x;
            j=j+1;
            //str=str+1;


        }
        cout<<endl;
        i=i+1;
    }

}