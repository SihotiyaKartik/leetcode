class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n = rectangles.size();
        int m = 2;
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(min(rectangles[i][0],rectangles[i][1]));
            
        }
        int count = 1;
        int temp = v[0];
        for(int i=1;i<n;i++){
            if(v[i]>temp)
            {temp = v[i];
                count = 1;               
            }
            else if(v[i]<temp){
                
                continue;
                
            }
            else{
                temp = v[i];
                count++;
                
            }
        }
        return count;
        
    }
};