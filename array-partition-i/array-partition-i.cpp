class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i=i+2){
            sum+=nums[i];
        }
        return sum;
    }
};