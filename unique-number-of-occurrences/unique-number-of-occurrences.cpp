class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     map<int,int> mp;
        set<int> se;
        int n = arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int s = mp.size();
        for(auto x:mp){
            se.insert(x.second);
        }
        if(s==se.size())return true;
        else return false;
    }
};