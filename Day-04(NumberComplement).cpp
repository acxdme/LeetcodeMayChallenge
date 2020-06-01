/* difficulty:easy
time complexcity: O(1)
Space complexcity:O(1)
Note: In C++ we can use log2(),log() and log10() as these are the inbuilt functions for log base 2 ,log base e and 
log base 10 respectively.
*/

class Solution {
public:
    int findComplement(int num) {
        if(num==0)
            return 1;
        int bits=log2(num)+1;
        int layer=(unsigned)(1<<bits)-1;
        return layer^num;
        
    }
};
