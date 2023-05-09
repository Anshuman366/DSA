#include<iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0;
        while(i<31){
            int ans=pow(2,i);
            if(ans==n){
                return true;
                break;
            }
            
            i=i+1;
        }
        return false;
        
    }
};