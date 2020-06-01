
class Solution {
public:
    int firstBadVersion(int n) {
        
        int start = 1 ,end=n;
        if(isBadVersion(start))
            return start;
        else if(isBadVersion(end) and !isBadVersion(end-1))
            return end;
        int mid;
        while(1)
        {
            mid=start+(end-start)/2; // (start+end)/2
            if(isBadVersion(mid))
            {
                end=mid;
               if(!isBadVersion(mid-1))
                  return mid;
            }
           
            if(!isBadVersion(mid))
            {
                start=mid;
                
            }  
            
        }
        
        return mid;
    }
};
