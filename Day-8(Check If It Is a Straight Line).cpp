/* Time complexity  : O(n)
Space complexity  : O(1)

*/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int n=coordinates.size();
        if(n==2)
            return true;
        int slope=0;
        
        if(coordinates[n-1][0]-coordinates[0][0]==0)
            slope=INT_MAX;
        else
           slope=(coordinates[n-1][1]-coordinates[0][1])/(coordinates[n-1][0]-coordinates[0][0]);
        for(int i=0;i<n-1;i++)
        {
            int m=0;
            if(coordinates[i+1][0]-coordinates[i][0]==0)
                m=INT_MAX;
            else
                m=(coordinates[i+1][1]-coordinates[i][1])/(coordinates[i+1][0]-coordinates[i][0]);
            if(slope!=m)
                return false;
        }
        
        return true;
    }
};
