class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n = items.size();
        int ans = 0;
        if(ruleKey=="type"){
            for(int i =0;i<n;i++){
                if(ruleValue==items[i][0])ans++;
            }
        }
        if(ruleKey=="color"){
            for(int i=0;i<n;i++){
                if(ruleValue==items[i][1])ans++;
            }
        }
        if(ruleKey=="name"){
            for(int i=0;i<n;i++){
                if(ruleValue==items[i][2])ans++;
            }
        }
        return ans;
    }
};