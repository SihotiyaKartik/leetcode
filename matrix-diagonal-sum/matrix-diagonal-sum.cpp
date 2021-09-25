class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum  = 0;
        int n = mat.size();
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
        }
        for(int i=n-1,j=0;i>=0,j<n;i--,j++){
            
                if(i!=j)
                {
                    sum+=mat[i][j];
                }
            
            
        }
        return sum;
    }
};