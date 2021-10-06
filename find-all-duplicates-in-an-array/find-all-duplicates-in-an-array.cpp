class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        map<int,int>::iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++){
            if(itr->second==2){
                res.push_back(itr->first);
            }
        }
        return res;
    }
};