class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v(nums.size());
        v[0] = nums[0];
        int n = nums.size();
        for(int i=1;i<n;i++){
            v[i] = v[i-1] + nums[i];
         }
        return v;
    }
};