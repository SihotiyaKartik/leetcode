class Solution {
public:
    bool isPalindrome(int x) {
        long int temp = 0;
        int a=x;
        while(a>0){
            temp = (temp*10) + a%10;
            a=a/10;
        }
        if(x==temp)return true;
        return false;
    }
};
