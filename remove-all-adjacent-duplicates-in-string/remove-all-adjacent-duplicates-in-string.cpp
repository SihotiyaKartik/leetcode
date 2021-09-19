class Solution {
public:
    void swap(char *a,char *b){
       char temp = *a;
        *a = *b;
        *b = temp;
    }
    string removeDuplicates(string s) {
        stack<char> S;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(S.empty()){
                S.push(s[i]);
            }
            else{
                if(S.top()==s[i])S.pop();
                else{
                    S.push(s[i]);
                }
            }
        }
        string ans = "";
        while(!S.empty()){
            ans+=S.top();
            S.pop();
        }
        int N = ans.length();
        for(int i=0;i<N/2;i++){
            swap(&ans[i],&ans[N-1-i]);
        }
        return ans;
        
    }
};