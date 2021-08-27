class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        std::deque<int> d;
        std::stack<int> s;
        for(int i = sandwiches.size() - 1;i>=0;i--){
            s.push(sandwiches[i]);
            
        }
        for(auto &i:students){
            d.push_back(i);
        }
        int count = 0;
        while(!d.empty()){
            if(s.top() == d.front()){
                d.pop_front();
                s.pop();
                count = 0;
                
            }
            else{
                int x = d.front();
                d.pop_front();
                d.push_back(x);
                ++count;
                
            }
            if(count == d.size())break;
            
        }
        return d.size();
        
        
    }
};