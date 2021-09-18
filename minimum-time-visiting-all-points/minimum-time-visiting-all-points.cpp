class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        int res = 0;
        for(int i=0;i<n-1;i++){
            if(abs(points[i][0] - points[i+1][0]) == abs(points[i][1] - points[i+1][1])){
                res+=abs(points[i][0] - points[i+1][0]);
                
            }
            else if(abs(points[i][0] - points[i+1][0]) > abs(points[i][1] - points[i+1][1])){
                res = res + abs(points[i][0] - points[i+1][0]);
            }
            else {
                res = res + abs(points[i][1] - points[i+1][1]);
            }
        }
        return res;
    }
};