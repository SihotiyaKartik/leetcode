class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       int m = matrix.size();//rows
       int n = matrix[0].size();//col
       int left = 0;
        int right = n-1;
        int top = 0;
        int bottom = m-1;
        vector<int> v;
        int flag = 1;
        while(left<=right && top<=bottom){
            if(flag==1){
                for(int i=left;i<=right;i++){
                    v.push_back(matrix[top][i]);
                                    }
                flag = 2;
                    top++;

                
            }
            else if(flag==2){
                for(int i=top;i<=bottom;i++){
                    v.push_back(matrix[i][right]);
                    }
                flag = 3;
                    right--;
                
            }            
            else if(flag == 3){
                for(int i=right;i>=left;i--){
                    v.push_back(matrix[bottom][i]);
                                        
                }
                flag = 4;
                    bottom--;

                
            }
            else if(flag==4){
                for(int i=bottom;i>=top;i--){
                    v.push_back(matrix[i][left]);
                   
                }
                 flag = 1;
                    left++;
                
                
            }
        }
        return v;
    }
};