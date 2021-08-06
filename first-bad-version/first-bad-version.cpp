// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1,high=n;
        int res;
        if(!isBadVersion(n-1))return n;
        while(low<high){
            int mid = low+(high-low)/2;
            if(isBadVersion(mid)){
                high = mid;
                res = mid; 
            }
            else{
                low = mid + 1;
                
            }
        }
        return res;
        
    }
};