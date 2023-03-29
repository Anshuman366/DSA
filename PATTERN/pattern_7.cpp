#include<iostream>
using namespace std;


int main(){
    int row;
    cout<<"Please enter number of rows";
    cin>>row;

    int i=1;
    int count =1;
    while(i<=row){
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }


}


// 1
// 2 3
// 4 5 6
// 7 8 9 10