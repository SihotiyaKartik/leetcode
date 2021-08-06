class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        double result;
        vector<int> nums3(m+n);
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                nums3[k++] = nums1[i++];
            }
            else{
                nums3[k++] = nums2[j++];
            }
            
            
        }
        while(i<m){
            nums3[k++]=nums1[i++];
        }
        while(j<n){
            nums3[k++] = nums2[j++];
        }
        if((m+n)%2==0){
            result =  (nums3[(m+n)/2] + nums3[(m+n-2)/2])/2.0;
        }
        if((m+n)%2!=0){
            result =  (nums3[(m+n)/2.0]);
        }
        return result;
    }
};