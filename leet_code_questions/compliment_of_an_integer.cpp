#include<iostream>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        int mask=0;
        int m=n;
        if(m==0){
            return 1;
        }
        //jab tak ki m ki value 0 na ho jai tab tak loop ko run kro
        while(m!=0){
            mask = (mask<<1) | 1; //phle mask ki value 000000000... 000 hogi then left shift krne k bad
            // and uska or lene k bad we will get mask as 0000000....111
            //
            m=m>>1;
        }
        int ans=(~n)&mask;
        return ans;
        
    }
};
