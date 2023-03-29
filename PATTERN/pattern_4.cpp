#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Please enter the row";
    cin>>row;

    int col;
    cout<<"Please enter the number of column";
    cin>>col;
    int count=0;
    int i=0;
    while(i<row){
        int j=0;
        while(j<col){
            cout<<count << " ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}

//   j
//   0 1 2 3
// i 0-1 2 3
//   1-4 5 6
//   2-7 8 9