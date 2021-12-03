class Solution {
public:
    void func(int ind, int target, vector<vector<int>> &ans, vector<int> &temp, vector<int> &candidates){
        
        if(ind == candidates.size()){
            if(target == 0){
                ans.push_back(temp);
            }
            return;
        }
        
        if(candidates[ind] <= target){
            temp.push_back(candidates[ind]);
            func(ind,target-candidates[ind],ans,temp,candidates);
            temp.pop_back();
        }
        func(ind+1,target,ans,temp,candidates);
        
    } 
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        //sort(candidates.begin(),candidates.end());
        func(0,target,ans,temp,candidates);
        return ans;
    }
};