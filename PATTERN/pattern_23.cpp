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
        int count = i;
        while(j){
            
            cout<<count;
            count=count+1;
           
            j=j-1;
        }
        cout<<endl;
        
        i=i+1;
        //count=count+1;

    }

}

// 1 2 3 4
//   2 3 4
//     3 4
//       4