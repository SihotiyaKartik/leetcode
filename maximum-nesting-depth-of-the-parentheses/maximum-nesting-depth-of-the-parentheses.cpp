class Solution {
public:
    int maxDepth(string s) {
        stack<char> S;
        int n = s.length();
        int num = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                S.push(s[i]);
                num++;
            }
            else if(s[i]==')' && S.top()=='('){
                count = max(count,num);
                S.pop();
                num--;
            }
            else{
                if(s[i]==')' && S.top()!='('){
                    S.push(s[i]);
                }
            }
        }
        return count;
    }
};