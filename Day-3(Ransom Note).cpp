/*
Time complexity :  O(n) where n is the size of ransomNote
Space complexity : O(1) 
Approach : Use of hash for each of ransomNote and magazine strings
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      int n=ransomNote.size();
      int m=magazine.size();
      int fr[26]={0};
      int mr[26]={0};
        for(int i=0;i<n;i++)
        {
            fr[ransomNote[i]-'a']++;
        }
        for(int i=0;i<m;i++)
        {
            mr[magazine[i]-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(mr[i]<fr[i])
                return false;
        }
        
        
      return true;
    }
};
