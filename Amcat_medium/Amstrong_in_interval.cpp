#include<iostream>
#include<cmath>
using namespace std;

//  Arngstom number in range


int main(){

    int r1,r2;
    cout<<"Please enter the range seperated by space"<<endl;
    cin>>r1>>r2;

    for(int i =r1;i<=r2;i++){
        int sum=0;
        int num_size=to_string(i).size();
        //cout<<num_size;
        int temp=i;
        while(temp!=0){
            int last_digit=temp%10;
            //cout<<last_digit<<endl;
            sum=sum+(pow(last_digit,num_size));
            temp=temp/10;

        }
        if(sum==i){
            cout<<i<<endl;
        }
       

    }

}
