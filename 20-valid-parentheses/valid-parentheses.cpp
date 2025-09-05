class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(st.empty() && (s[i]=='}' || s[i]==')' ||s[i]==']')) return false;
            if(s[i]=='{' || s[i]=='(' ||s[i]=='[') st.push(s[i]);
            else if(s[i]=='}' && st.top()=='{') st.pop();
            else if(s[i]==']' && st.top()=='[') st.pop();
            else if(s[i]==')' && st.top()=='(') st.pop();
            else return false;
        }
        if(!st.empty()) return false;
        return true;
    }
};