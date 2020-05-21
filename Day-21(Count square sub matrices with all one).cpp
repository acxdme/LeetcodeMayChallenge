/*
Question : Given a m * n matrix of ones and zeros, return how many square submatrices have all ones.
Constraints :1 <= arr.length <= 300 
             1 <= arr[0].length <= 300
             0 <= arr[i][j] <= 1
Time complexity : O(n^2)
Space complexity :O(n^2)
My approach : Use of DP ,Try solving the question on Submaximal square to get a better idea to solve this question.
*/

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==1)
                {
                     
                    dp[i+1][j+1]=1+min(dp[i][j], min(dp[i+1][j],dp[i][j+1]) );
                     count+=dp[i+1][j+1];
                }
            }
        }
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 cout<<dp[i+1][j+1]<<" ";
//             }
//             cout<<endl;
//         }
        
       return count; 
    }
};
