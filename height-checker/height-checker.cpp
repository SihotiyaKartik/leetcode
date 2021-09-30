class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int sum = 0;
        vector<int> v(heights.begin(),heights.end());
        sort(v.begin(),v.end());
        int i=0,j=0;
        int n = heights.size();
        while(n--){
            if(heights[i]!=v[j])sum++;
            i++;
            j++;
            
        }
        return sum;
    }
};