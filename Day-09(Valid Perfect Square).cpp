/*
Below, I have implemented using three approaches
" BEST "Time complexity : O(n)
Space comlexity : O(1)
}

*/
/*class Solution {
    
   public: SIMPLE APPROACH
   bool isPerfectSquare(int num) {
       long int i = 1;
        for(;i*i<num;i++);
        return i*i==num;
    }
        
};
*/

/* BINARY SEARCH
class Solution {
public:
	bool isPerfectSquare(int num) {
		if(num==1) return true;
		long long low=1;
		long long high=num;
		long long mid;
		while(low+1<high){
			mid=(high-low)/2+low;
			if(mid*mid>num){
				high=mid;
			}
			else{
				low=mid;
			}
		}
		if(mid*mid==num || low*low==num || high*high==num) return true;
		return false;

	}
};
*/
// perfect square will always have odd number of factors.
class Solution{
  public:
     bool isPerfectSquare(int num)
          {
              long int i=1;
              int count=0;
              for(;i*i<=num;i++)
              {
                  if(num%i==0)
                  {
                      if(num/i==i)
                          count++;
                      else
                          count+=2;
                  }
              }
         
            if(count%2==0)
                return false;
           return true;
          }
};
