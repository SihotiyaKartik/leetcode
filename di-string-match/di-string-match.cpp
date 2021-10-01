class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        vector<int> v;
        int low = 0;
        int high = n;
        for(int i=0;i<n;i++){
            if(s[i]=='I'){v.push_back(low);low++;}
            else{v.push_back(high);high--;}
        }
        v.push_back(low);
        return v;
    }
};