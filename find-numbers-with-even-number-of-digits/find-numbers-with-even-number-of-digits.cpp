class Solution {
public:
    int digit(int n){
        int count = 0;
        while(n>0){
            n = n/10;
            count++;
        }
        return count;
        
    }
    int findNumbers(vector<int>& nums) {
        int N = nums.size();
        int sum = 0;
        for(int i=0;i<N;i++){
            if(digit(nums[i])%2==0)sum++;
        }
        return sum;
    }
};