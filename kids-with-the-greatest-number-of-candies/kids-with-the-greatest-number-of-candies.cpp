class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> v(n);
        
        int T = -1;
        for(int i=0;i<n;i++){
            T = max(T,candies[i]);
            
        }
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=T){
                v[i] = true;
            }
            else{
                v[i] = false;
            }
            
        }
        return v;
    }
};