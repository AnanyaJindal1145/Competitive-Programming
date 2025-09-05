class Solution {
public:
    bool isValid(string s){
        //using map+stack
        unordered_map<char, char> mappy;
        mappy[']']='[';
        mappy['}']='{';
        mappy[')']='(';
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(mappy.find(s[i])!=mappy.end()){ //basically agar closing bracket hai
                if(!st.empty() && st.top()==mappy[s[i]]){
                    st.pop();
                }
                else return false;
            }
            else{
                st.push(s[i]);
            }
        }
        return st.empty();
        // stack<char> st;
        // for(int i=0;i<s.length();i++){
        //     if(st.empty() && (s[i]=='}' || s[i]==')' ||s[i]==']')) return false;
        //     if(s[i]=='{' || s[i]=='(' ||s[i]=='[') st.push(s[i]);
        //     else if(s[i]=='}' && st.top()=='{') st.pop();
        //     else if(s[i]==']' && st.top()=='[') st.pop();
        //     else if(s[i]==')' && st.top()=='(') st.pop();
        //     else return false;
        // }
        // if(!st.empty()) return false;
        // return true;
    }
};