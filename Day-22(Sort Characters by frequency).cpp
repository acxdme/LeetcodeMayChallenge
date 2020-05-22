/*
Time complexity   :O(n) where n is the size of the string s
Space complexity  : O(n)
Note: Insertion in map takes constant time
My approach : Initially use a map to store the character with its frequency, then invert the map by using a multimap.

*/
class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        string ans;
        map<char,int> m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        multimap<int,char,greater<int>> mul;
        for(auto it=m.begin();it!=m.end();it++)
        //for(auto it : m )
        {
            mul.insert(make_pair(it->second, it->first));
        }
        for(auto it=mul.begin();it!=mul.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
            for(int i=0;i<it->first;i++)
            {
                ans+=it->second;
            }
        }
        
     return ans;   
    }
};
//Alternate approach : you can also use vector<pair<int,char>> v  instead of multimap;
