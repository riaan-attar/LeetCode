// 20. Valid Parentheses
class Solution {
public:
    bool isValid(string str) {
        stack <char> s;
        int len=str.length();
        
        for(int i=0;i<len;i++){
            if(str[i]=='(' || str[i]=='[' || str[i]=='{' )
                s.push(str[i]);
            else if(str[i]==')' || str[i]==']' || str[i]=='}') {
                if(s.empty())
                    return false;
                else if(str[i] == ')' && s.top()!='(')
                    return false;
                else if(str[i] == '}' && s.top()!='{')
                    return false;
                else if(str[i] == ']' && s.top()!='[')
                    return false;
                else
                    s.pop();
             }  
        }
        if(s.empty())
            return true;
        else 
            return false;
            
    }
};
// implemented this using stack 
// firstly i insert the element if its open parenthesis the iterate over the other element if pair is found then the top element is poped 