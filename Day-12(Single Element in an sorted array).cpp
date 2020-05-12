*/

time complexity: O(log n)
Space complexity : O(1)
My approach : Use of binary search where the decision is made using the postion of index(even or odd) and where the other element matches
with i+1 or i-1

*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
            return nums[0];
        int start=0 , end=n-1;
        int mid=start+(end-start)/2;
        while(1)
        {
            if(mid%2!=0)
            {
                
              if(mid-1>=0 and nums[mid]==nums[mid-1])
                    start=mid;
              else if(mid+1<=n-1 and nums[mid]==nums[mid+1])
                     end=mid;
              else
                    return nums[mid];
            }
            
            else
            {
              if(mid-1>=0 and nums[mid]==nums[mid-1])
                  end=mid;
              else if(mid+1<=n-1 and nums[mid]==nums[mid+1])
                  start=mid;
              else
                return nums[mid];
                
            }
            
            if(end-start==1 and nums[mid]==nums[mid-1])
                return nums[end];
            if(end-start==1 and nums[mid]==nums[mid+1]) 
                return nums[start];

            
         mid=start+(end-start)/2;
        }
        return nums[mid];
    }
};
