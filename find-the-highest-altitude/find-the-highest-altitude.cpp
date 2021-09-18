class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int m = INT_MIN;
        int count = 0;
        int n = gain.size();
        for(int i=0;i<n;i++){
            count+=gain[i];
            m = max(m,count);
        }
        if(m<0)return 0;
        else return m;
    }
};