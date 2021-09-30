class Solution {
public:
    void swap(int *a,int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int MAX = arr[n-1];
        arr[n-1] = -1;
        for(int i=n-2;i>=0;i--){
            if(arr[i]>MAX){
                swap(&arr[i],&MAX);
            }
            else{
                arr[i] = MAX;
            }
        }
        return arr;
    }
};