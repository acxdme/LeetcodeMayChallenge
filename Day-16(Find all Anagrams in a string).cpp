/*
Time complexity : O(n) where n is the size of the string s
Space complexity : O(1)
Approach : use of hash for comparing the string p with the substring of s using the Sliding Window Approach.
*/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        
        int hashp[26];
        memset(hashp,0,sizeof(hashp));
        for(int i=0;i<m;i++)   
        {
            hashp[p[i]-'a']++;
        }
        
        int hashs[26];
        memset(hashs,0,sizeof(hashs));
        int start=0,end=0,count=0;     
        vector<int> v;
        while(end<n)
        {
            hashs[s[end]-'a']++;
            end++;
            count++;
            if(count==m)
            {  
                int flag=0;

                for(int i=0;i<26;i++)
                {
                    if(hashs[i]!=hashp[i])
                    {
                        flag=1;
                        break;
                    }       
                }
                if(flag==0)
                    v.push_back(start);

                hashs[s[start]-'a']--;
                start++;
                count--;
            }
            
        }
        return v;
    }
};
