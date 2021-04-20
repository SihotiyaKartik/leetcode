class Solution {
public:
    bool isValid(string s) 
    {
        string str;
        int n=s.size();
    
        for(int i=0;i<n;i++)
        {
            if(s[i]=='{'||s[i]=='['||s[i]=='(')
            {
                str.push_back(s[i]);
            }
           
            else if(s[i]=='}'||s[i]==']'||s[i]==')')
            {
                char temp=str.back();
                if((s[i]==')' && temp=='(')||(s[i]=='}' && temp=='{')||(s[i]==']' && temp=='['))
                {
                    str.pop_back();
                }
                else
                {
                    str.push_back(s[i]);
                }
                
             }
            
            
        }
        if(str.size()==0)
            return true;
        else
           return false;
    }
};
