/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low=1,high=n;
        while(true){
            int num = low + (high-low)/2;
            int res = guess(num);
            if(res==0){
                return num;
            }
            else if(res==1){
                low = num+1;
            }
            else if(res==-1){
                high = num-1;
            }
            
            
        }
    }
};