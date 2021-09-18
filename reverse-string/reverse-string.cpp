class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            char c = s[low];
            s[low] = s[high];
            s[high] = c;
            low++;
            high--;
            
        }
        
    }
};