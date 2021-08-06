class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        int carry;
        digits[n]+=1;
        carry = digits[n]/10;
        digits[n]%=10;
        int i = n-1;
        while(i>=0){
            if(carry==1){
                digits[i]+=1;
                carry = digits[i]/10;
                digits[i]%=10;
            }
            i--;
            
        }
        if(carry==1){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};