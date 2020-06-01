class Solution {
public:
    int numJewelsInStones(string J, string S) {
       int n=S.size();
       int m=J.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                if(S[i]==J[j])
                {
                    count++;
                    break;
                }
        }
       return count;
    }
};
