class Solution {
public:
    void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    
    void reverse(vector<int>& nums, int n){
        int i = n;
        int j = nums.size()-1;
        while(i<j){
            swap(&nums[i],&nums[j]);
            i++;
            j--;
        }
    }
    
    void nextPermutation(vector<int>& nums) {
      int l = nums.size() - 2;
      while(l>=0 && nums[l+1]<=nums[l])l--;
        if(l>=0){
            int k = nums.size()-1;
            while(nums[k] <= nums[l]){
                k--;
            }
            swap(&nums[l],&nums[k]);
        }
        reverse(nums,l+1);
    }
};