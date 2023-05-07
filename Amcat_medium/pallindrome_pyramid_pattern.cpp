#include<iostream>
using namespace std;

int main(){
    //printing the number in reverse order

    int row;
    cout<<"Please enter the number of rows";
    cin>>row;

    //printing the number in reverse order
    int i=1;
    while(i<=row){
        
        int space=row-i;
        while(space){
            cout<<" ";
            space=space-1;

        }
        //printing the number
        int j=1;
        int count=1;
        while(j<=i){
            cout<<count<<" ";
            j=j+1;
            count=count+1;
        }

        //printing the reverse of the number to complete pallindrome

        if(i==1){
            cout<<" ";

        }
        else{
            int count1=i-1;
            int x=i;
            while(count1){
                cout<<count1<<" ";
                x=x+1;
                count1=count1-1;
            }

        }




        cout<<endl;
        i=i+1;
    }


}