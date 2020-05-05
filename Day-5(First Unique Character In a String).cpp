/*
Time complexity: O(n)
Space complexity:O(n)
Approach: Use of Unordered Map STL
*/
class Solution {
public:
    int firstUniqChar(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n=s.size();
        unordered_map<char,int>m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        int index=-1;
        for(int i=0;i<n;i++)
        {
            if(m[s[i]] == 1)
             {
                return i;
             }
            
        }
        
        return index;
    }
};
