class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int temp = 0;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]==')')temp--;
            if(temp!=0)ans+=s[i];
            if(s[i]=='(')temp++;
        }
        return ans;
    }
};