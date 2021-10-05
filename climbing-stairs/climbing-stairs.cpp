class Solution {
public:
    
    int climbStairs(int n) {
        int f = 1;
        int s = 2;
        if(n==1)return f;
        else if(n==2)return s;
        else{
            int sum = 0;
            for(int i=3;i<=n;i++){
                sum = f+s;
                f = s;
                s = sum;
            }
            return sum;
        }
        
    }
};