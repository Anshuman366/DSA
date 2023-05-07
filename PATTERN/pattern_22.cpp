#include<iostream>
using namespace std ;

int main(){
    int row;
    cout<<"please enter the number of rows";
    cin>>row;

    int i=1;
    int count=1;
    while(i<=row){
        int space=row-i;
        while(space){
            cout<<' ';
            space=space-1;


        }
        int j=i;
        while(j){
            cout<<count;
            j=j-1;
        }
        cout<<endl;
        count=count+1;
        // cout<<count;
        i=i+1;
    }
}

//    1
//   22
//  333
// 4444