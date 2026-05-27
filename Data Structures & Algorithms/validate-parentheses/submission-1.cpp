class Solution {
public:
    bool isValid(string s) {
        int i=0;
        stack<char> st;
         while(i<s.size()){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else{
                if(st.empty() || (st.top()=='(' && s[i]!=')') || (st.top()=='{' && s[i]!='}') || (st.top()=='[' && s[i]!=']')){
                    return false;
                }
                else st.pop();
            }
            i++;
        }
        return st.empty();
    }
};
