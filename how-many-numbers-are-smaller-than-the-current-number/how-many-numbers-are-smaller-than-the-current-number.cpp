class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> v;
        int n = nums.size();
        for(int i=0;i<n;i++){
            v.push_back(nums[i]);
        }
        sort(nums.begin(),nums.end());
        
        for(int i=n-1;i>=0;i--){
            
            mp[nums[i]] = i;
        }
        for(int i=0;i<n;i++){
            nums[i] = mp[v[i]];
        }
        return nums;
    }
};