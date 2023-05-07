#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Please enter the number of rows";
    cin>>row;

    int i=1;
    while(i<=row){
        int space=i-1;
        while(space){
            cout<<' ';
            space=space-1;

        } 
        int j=row-i+1;
        //cout<<j<<endl;
        int count=1;
        while(j){
            cout<<count;
            count=count+1;
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    
    }
    

}

// 1234
//  123
//   12
//    1