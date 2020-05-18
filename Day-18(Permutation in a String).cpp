/*
Time complexity: O(n)
Space complexity : O(1)
Approach : Sliding window algorithm , Do refer to day-17 Find anagrams in a string which is also a similar questioin
*/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s2.size();
        int m=s1.size();
        
        int hash1[26];                  // ye wali se dhudhna hai
        memset(hash1,0,sizeof(hash1));  //s1 = "ab" s2 = "eb"
        for(int i=0;i<m;i++)               // a b         e b
        {
            hash1[s1[i]-'a']++;
        }
        
        int hash2[26];
        memset(hash2,0,sizeof(hash2));
        int start=0,end=0,count=0;
        while(end<n)
        {
                                      //e b     //2
            hash2[s2[end]-'a']++;
            end++;
            count++;
            if(count==m)
            {
            
                bool val=true;

                for(int i=0;i<26;i++)
                {
                    if(hash1[i]!=hash2[i])
                    {
                        val=false;
                        break;
                    }
                }
                
               if(val==true)
               {
                   return true;
               }
              hash2[s2[start]-'a']--;
              start++;
              count--;   
            }
        }
        return false;
    }
};
