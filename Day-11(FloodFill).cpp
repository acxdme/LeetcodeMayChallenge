/* FloodFill is a very popular Algorithm in Computer Science
  so, What is FloodFill learn here:  https://www.geeksforgeeks.org/flood-fill-algorithm-implement-fill-paint/
  Approach Used: DFS (can also be implemented using BFS)
  Time complexity: O(n)(m)
  Space complexity  : O(1)
*/

class Solution {
    
private:
    void ff(vector<vector<int>>& image,int r,int c,int nc,int color)
    {
        if(r>image.size()-1 or r<0 or c>image[0].size()-1 or c<0)
            return;
        if(image[r][c]!=color)
            return;
        if(image[r][c]==nc)
            return;
        image[r][c]=nc;
        
        ff(image,r+1,c,nc,color);
        ff(image,r-1,c,nc,color);
        ff(image,r,c+1,nc,color);
        ff(image,r,c-1,nc,color);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        int color=image[sr][sc];
        ff(image,sr,sc,newColor,color);
        return image;
    }
};
