#include<iostream>
using namespace std;

int main(){
    
    int row;
    cout<<"Please enter the number of row";
    cin>>row;

    int i=1;
    while(i<=row){
        int j=1;
        while(j<=i){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}

// 1
// 22
// 333
// 4444


