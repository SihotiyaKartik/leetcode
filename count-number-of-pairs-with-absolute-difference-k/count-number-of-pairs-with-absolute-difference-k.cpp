class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
     unordered_map<int,int> mp;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]+k])count+=mp[nums[i]+k];
            if(mp[nums[i]-k])count+=mp[nums[i]-k];
            
            mp[nums[i]]++;
        }
        return count;
    }
};