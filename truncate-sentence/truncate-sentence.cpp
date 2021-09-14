class Solution {
public:
    string truncateSentence(string s, int k) {
        int n = s.length();
        int i=0;
        string S;
        while(k && i<n){
            if(s[i]==' ')k--;
            if(k!=0)S+=s[i];
            i++;
        }
        return S;
    }
};