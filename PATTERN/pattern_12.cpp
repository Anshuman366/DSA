#include<iostream>
using namespace std;

int main(){
   int row;
   cout<<"Please enter the number of rows";
   cin>>row;

   int col;
   cout<<"Please enter the number of column ";
   cin>>col;

   int i=1;
   char str='A';
   while(i<row){
    int j=1;
    while(j<=col){
        cout<<str<<" ";
        str=str+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }

}

// A B C D
// E F G H
// I J K L