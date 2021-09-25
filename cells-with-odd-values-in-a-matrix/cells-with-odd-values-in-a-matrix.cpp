class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> vec(m,vector<int> (n,0));
        int N  = indices.size();
        for(int i=0;i<N;i++){
            for(int j=0;j<n;j++){
                vec[indices[i][0]][j]++;
                
            }
            for(int j = 0;j<m;j++){
                vec[j][indices[i][1]]++;
            }
        }
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vec[i][j]%2!=0)count++;
            }
        }
        return count;
        
    }
};