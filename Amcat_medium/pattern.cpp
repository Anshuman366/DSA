// Palindrome_half_pyramid 

#include<iostream>
using namespace std;


int main(){
    int row;
    cout<<"Please enter the number of rows";
    cin>>row;

    int i=1;
    // loop to print the number as:
        // 1
        // 1 2 
        // 1 2 3
        // 1 2 3 4
    while(i<=row){
        int j=1;
        int count=1;
        while(j<=i){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        // condition to print  the space if first row
        if(i==1){
            cout<<" ";
        }
        else{
            // loop to print the number in reverse order from row number 2
            count=i-1;
            j=i-1;
            while(j){
                cout<<count<<" ";
                j=j-1;
                count=count-1;
            }
        }
       
        cout<<endl;
        i=i+1;
    }

}

// 1
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1