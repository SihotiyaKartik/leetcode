class Solution {
public:
    int minOperations(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                continue;
            }
            else if(nums[i]<nums[i-1]){
                sum+=nums[i-1]-nums[i]+1;
                nums[i] += nums[i-1]-nums[i]+1;
            }
            else{
                sum++;
                nums[i]++;
            }
        }
        return sum;
    }
};