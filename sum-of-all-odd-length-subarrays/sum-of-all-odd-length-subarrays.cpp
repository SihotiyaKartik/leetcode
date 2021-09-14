class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){ans+=arr[i];}
        
        for(int i = 0;i<n;i++){
            int k=3;
            while(i+k<=n){
                for(int j=i;j<k+i;j++){
                    ans+=arr[j];
                }
                k = k+2;
            }
            
        }
        return ans;
    }
};