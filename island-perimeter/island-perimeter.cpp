class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int sum = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count = 4;
                if(grid[i][j]==1){
                    if(i-1>=0){
                        if(grid[i-1][j]==1)count--;
                    }
                    if(i+1<n){
                        if(grid[i+1][j]==1)count--;
                    }
                    if(j-1>=0){
                        if(grid[i][j-1]==1)count--;
                    }
                    if(j+1<m){
                        if(grid[i][j+1]==1)count--;
                    }
                    
                    
                    sum+=count;
                    
                }
                else{
                    continue;
                }
            }
            
        }
        return sum;
    }
};