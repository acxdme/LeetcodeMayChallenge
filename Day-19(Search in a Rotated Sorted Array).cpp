/*
Time complexity   : O(log n)
Space complexity  : O(1)
My approach : Use of Modified Binary Search.
Algorithm:
1.Find middle point mid = (l + h)/2
2.If key is present at middle point, return mid.
3.Else If arr[l..mid] is sorted
    a) If key to be searched lies in range from arr[l]
       to arr[mid], recur for arr[l..mid].
     b) Else recur for arr[mid+1..h]
4.Else (arr[mid+1..h] must be sorted)
   a) If key to be searched lies in range from arr[mid+1]
    to arr[h], recur for arr[mid+1..h].
    b) Else recur for arr[l..mid]
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0,end=n-1;
        int mid= start+(end-start)/2;
        //int f=nums[0];
        while(end >=start)              
                                        
        {
            if(nums[mid]==target)
                return mid;
            if( nums[mid]>=nums[start])
            {
                if(target >=nums[start] and target <nums[mid])
                    end=mid-1;
                else
                    start=mid+1;
            }
            else
            {
                if(target>nums[mid] and target<=nums[end])
                    start=mid+1;
                else
                    end=mid-1;
                 
            }
            mid= start+(end-start)/2;   
                                    
                                        
        }
      return -1;  
    }
};
