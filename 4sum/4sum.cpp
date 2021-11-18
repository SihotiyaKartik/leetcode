class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        if(n<4)return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int target_3 = target - nums[i];
            for(int j=i+1;j<n;j++){
                int target_2 = target_3 - nums[j];
                int l = j+1;
                int h = n-1;
                while(l<h){
                    int sum = nums[l] + nums[h];
                    if(sum < target_2)l++;
                    else if(sum>target_2)h--;
                    else{
                        vector<int> q(4,0);
                        q[0] = nums[i];
                        q[1] = nums[j];
                        q[2] = nums[l];
                        q[3] = nums[h];
                        res.push_back(q);
                        
                        while(l<h && nums[l]==q[2])++l;
                        while(l<h && nums[h]==q[3])--h;
                        
                    }
                }
                while(j+1 < n && nums[j+1]==nums[j])++j;
            }
            while(i+1 < n && nums[i+1]==nums[i])++i;
        }
        return res;
    }
};