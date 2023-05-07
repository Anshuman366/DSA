#include<iostream>
using namespace std;

int main(){

    int d ='A';
    int row;
    cout<<"Please enter the number of row";
    cin>>row;

    int i=1;     
    while(i<=row){
         int j=1;

         char str=d+row-i;

         while(j<=i){
          cout<<str;
          j=j+1;
          str=str+1;

         }
         cout<<endl;
         i=i+1;




    }

}

// D
// CD
// BCD
// ABCD

