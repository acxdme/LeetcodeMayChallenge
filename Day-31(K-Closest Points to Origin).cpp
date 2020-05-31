/*
Time complexity : O(NlogN)
Space complexity:O(n)
My approach : (Trivial Approach) Create a vector of(pair of(int, pair of(int,int)))  then insert distance with the corresponding point and then sort
the vector ,finally return the K closest points from the sorted vector.
*/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = points.size();
        vector<pair<int,pair<int,int>>> v;
        
        //Find all euclidean distances
        int dist;
        for(auto it: points)
        {
            dist = sqrt(it[0]*it[0] + it[1]*it[1]);
            v.push_back({dist,{it[0],it[1]}});
        }
        sort(v.begin(),v.end());  //takes NlogN time
        
        vector<vector<int>> ans(K);
        for(int i=0;i<K;++i)
        {
            ans[i].push_back(v[i].second.first);
            ans[i].push_back(v[i].second.second);
        }
        return ans;
    }
};
