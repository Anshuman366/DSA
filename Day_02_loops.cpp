#include<iostream>
using namespace std;

// int main(){
//     // int a;
//     // cin>>a;
//     // cout<<"Hello world";

//     // int a,b;
//     // cin>>a>>b;
//     // if(a<b){
//     //     cout<<a<<" is less";
//     // }
//     // else{
//     //     cout<< b<< "is less";
//     // }

//     // int i=1;
//     // int n;
//     // cin>>n;
//     // int sum=0;
//     // while(i<n){
//     //     sum+=i;
//     //     //cout<<"The sum in the range from 0 to "<<n<<"is"<<sum;
//     //     i=i+1;
//     // }
//     // cout<<"The sum in the range from 0 to "<<n<<" is "<<sum;

//    ///////////////////////// //prime number/////////////////////////////////////////////////////////////

//     int n;
//     cin>>n;
//     int i=2;
//     bool flag=false;
//     while (i<n){
//         // cout << n << " --" << i << " --" <<  n%i <<endl;
//         if(n%i==0){
//             //cout << n << i << n%i <<" is not a prime number";
//             flag=true;
//             break;
            
//         }
//         i++;
//     }
//     // cout<<flag;
//     if (flag==false){
//         cout<<n<< " is a prime number";
//     }
//     else{
//         cout<<n<< " is not a prime number";
//     }

//     return 0;

    

// }

////////////////////////////////factoriial of a number/////////////////////////////////////
int main(){
    int i=1;
    int n;
    cin>>n;
    int fact=1;
    while(i<=n){
        fact*=i;
        i=i+1;
    }
    cout<< "factorial of the number is "<< fact;
}
