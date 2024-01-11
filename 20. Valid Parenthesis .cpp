class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        int len=s.length();
        for(int i=0;i<len;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                a.push(s[i]);
            }
            else if((s[i]==')' || s[i]=='}' || s[i]==']') && a.empty()){
                return false;
            }
            else if((s[i]==')'&& a.top()=='(') || (s[i]=='}'&& a.top()=='{') || (s[i]==']'&& a.top()=='[')){
                a.pop();
            }
            else{
                return false;
            }
        }
        if(a.empty())
            return true;
        else
            return false;
    }
};