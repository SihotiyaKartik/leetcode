class Solution {
public:
    int reverse(int x) {
       int num = abs(x);
       long int temp = 0;
        while(num>0){
            temp=(temp*10) + (num%10);
            num = num/10;
        }
        if(temp>INT_MAX)return 0;
        if(x>0)return temp;
        return -temp;
    }
};
