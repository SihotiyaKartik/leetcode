class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string S = s;
        for(int i=0;i<indices.size();i++){
            S[indices[i]] = s[i];
        }
        return S;
    }
};