class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         n = grid.size();
         m = grid[0].size();
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){ans = max(ans,area(i,j,grid));}
            }
        }
        return ans;
    }
private:
    int n; int m;
    int area(int i, int j, vector<vector<int>>& grid){
        if(i<0 || i>=n || j<0 || j>=m || !grid[i][j]) return 0;
        grid[i][j] = 0;
        return (1 + area(i-1,j,grid) + area(i,j+1,grid) + area(i+1,j,grid) + area(i,j-1,grid));
        
        
    }
};