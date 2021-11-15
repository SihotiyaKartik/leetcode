class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n  = nums.size();
        if(n==1)return nums[0];
        int temp = 1;
        
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                temp++;
                if(temp>=ceil((double)n/2))return nums[i];
            }
            else{
                temp=1;
            }
        }
        return -1;
    }
};