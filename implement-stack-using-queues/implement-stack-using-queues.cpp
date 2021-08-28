class MyStack {
public:
    queue<int> q1;
        queue<int> q2;
 
    /** Initialize your data structure here. */
    MyStack() {
           }
    
    /** Push element x onto stack. */
    void push(int x) {
        if(q1.empty()){
            q1.push(x);
        }
        else{
            q2.push(x);
            while(!q1.empty()){
                int y = q1.front();
                q1.pop();
                q2.push(y);
                
            }
            queue<int> tempQ;
            tempQ = q1;
            q1 = q2;
            q2 = tempQ;
            
        }
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int y = q1.front();
            q1.pop();
        return y;
    }
    
    /** Get the top element. */
    int top() {
        return q1.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(q1.empty())return true;
        else return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */