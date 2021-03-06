class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int row = dungeon.size();
        int col = dungeon[0].size();
        vector<vector<int>> dp(row,vector<int> (col));
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=0;j--){
                if(i==row-1 && j==col-1){
                    dp[i][j] = min(0,dungeon[i][j]);
                    
                }
                else if(i==row-1){
                    dp[i][j] = min(0,dp[i][j+1] + dungeon[i][j]);
                    
                }
                else if(j==col-1){
                    dp[i][j] = min(0,dp[i+1][j] + dungeon[i][j]);
                    }
                else{
                    dp[i][j] = min(0,dungeon[i][j] + max(dp[i][j+1],dp[i+1][j]));
                }
                
            }
            
            
        }
        return abs(dp[0][0]) + 1;
    }
};