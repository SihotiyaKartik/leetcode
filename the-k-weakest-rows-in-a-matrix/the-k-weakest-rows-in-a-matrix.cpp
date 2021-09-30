class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>> s;
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            s.insert({count,i});
        }
        vector<int> ans;
        while(k--){
            auto a = *s.begin();
            ans.push_back(a.second);
            s.erase(a);
        }
        return ans;
    }
};