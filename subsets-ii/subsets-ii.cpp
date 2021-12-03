class Solution {
public:
    void func(int index, vector<vector<int>> &ans, vector<int> &temp, vector<int> &nums){
        ans.push_back(temp);
        for(int i=index;i<nums.size();i++){
            if(i!=index && nums[i]==nums[i-1])continue;
            temp.push_back(nums[i]);
            func(i+1,ans,temp,nums);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        func(0,ans,temp,nums);
        return ans;
    
    }
};