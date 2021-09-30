class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2);
        sort(nums.begin(),nums.end());
        int n  = nums.size();
        int SUM = n*(n+1)/2;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                ans[0] = nums[i];
                ans[1] = nums[i]+SUM - sum;
                break;
            }
        }
        return ans;
        
    }
};