/*
Time complexity:O(n)
Space complexity:O(n)
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n=nums.size();
        map<int,int> m;
        for(int i: nums)
        {
            m[i]++;
        }
        for(auto it: m)
        {
            if(it.second> n/2)
                return it.first;
        }
        
        return 0;
        
    }
};
