/*
Time complexity : O(n)  n=size of trust vector.
Space complexity  : O(N)  where N= number of people in town.
*/


class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int n=trust.size();
        int  hash[N+1];
        memset(hash,0,sizeof(hash));
        for(int i=0;i<n;i++)
        {
            hash[trust[i][0]]=1;
        }
        int t=0;
        for(int i=1;i<=N;i++)
        {
            if(hash[i]==0)
            {
                t=i;
                break;
            }
         }
        cout<<t<<endl;
        if(t==0)
            return -1;
        
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(trust[i][1]==t)
                count++;   
        }
        cout<<count<<endl;
        if(count==N-1)
            return t;
        
        return -1;
        
    }
};
