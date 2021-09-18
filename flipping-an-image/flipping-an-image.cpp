class Solution {
public:
    void swap(int *a,int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for(int i=0;i<n;i++){
            int low = 0;
            int high = n-1;
            while(low<=high){
                swap(&image[i][low],&image[i][high]);
                if(low!=high){
                if(image[i][low]==0)image[i][low]=1;
                else{image[i][low]=0;}
                if(image[i][high]==0)image[i][high]=1;
                else{image[i][high]=0;}
                }
                else{
                    if(image[i][low]==0)image[i][low]=1;
                else{image[i][low]=0;}
                }
                low++;
                high--;
            }
        }
        return image;
        
    }
};