#include<iostream>
using namespace std;

int main(){

    int r1,r2;
    cout<<"Please enter the range seperated by space";
    cin>>r1>>r2;

    int i;
    
    for(i=r1;i<=r2;i++){
        bool flag=false;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag=true;
                break;
            }
        }
        if(flag==false){
            
            cout<<i<<endl;

        }
    }



    



