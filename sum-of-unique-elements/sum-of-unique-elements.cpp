class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int sum = 0;
        for(auto x:mp){
            if(x.second == 1)sum+=x.first;
        }
        return sum;
    }
};