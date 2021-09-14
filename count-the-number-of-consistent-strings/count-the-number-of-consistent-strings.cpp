class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       unordered_map<char,bool> mp;
        int n = allowed.length();
        for(int i=0;i<n;i++){
            mp[allowed[i]] = true;
        }
        int m = words.size();
        int ans = 0;
        for(int i=0;i<m;i++){
            int N = words[i].length();
            bool flag = true;
            for(int j=0;j<N;j++){
                if(!mp[words[i][j]]){
                    flag = false;
                }
            }
            if(flag)ans++;
        }
        return ans;
    }
};