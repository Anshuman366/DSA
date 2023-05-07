#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Please enter the number of rows";
    cin>>row;

    int i=1;
    while(i<=row){
        int space=row-i;
        while(space){
            cout<<' ';
            space=space-1;
        }
        int count=1;
        int braek=1;
        int j=i;
        while(j){
            cout<<count<<' ';
            count=count+1;
            j=j-1;
        }
        
        if(i==1){
            //char x=' ';
            cout<<' ';
        }
        else{
            
            int count1=i-1;
            int j=i;
            int k=1;
            while(k<j){
                cout<<count1<<' ';
                count1=count1-1;
                k=k+1;
            }

        }
        cout<<endl;
        count=braek;
        i=i+1;
       
        }

}

//    1
//   1 2 1
//  1 2 3 2 1
// 1 2 3 4 3 2 1
