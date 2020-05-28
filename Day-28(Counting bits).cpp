*/
Time complexity :O(n)
Space complexity : O(1)
Approach : Using Bitwise and  value[i] = (i & i-1) +1
*/

class Solution {
public:
    vector<int> countBits(int num) 
    {   
        vector<int> res(num + 1, 0);
        for(int i=1;i<=num;++i)
        {
            res[i] = res[i & (i - 1)] + 1;
        }
        return res;
    }
};

/*
Alternate Approach
Use of inbuilt function __builtin_popcount(value) this functions time complexity is O(1)
Time complexity : O(n) 
Space complecxity : O(1)
*/
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v;
        v.push_back(0);
        for(int i=1;i<=num;i++)
        {
           v.push_back( __builtin_popcount(i));
        }
        return v;
    }
};
