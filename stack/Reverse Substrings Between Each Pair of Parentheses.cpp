class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        for(int i=0;s[i];i++){
            if(s[i]==')'){
                int x=st.top();
                reverse(s.begin()+x,s.begin()+i);
                st.pop();
            }
            else if(s[i]=='(') st.push(i);
        }
        string ans="";
       for(int i=0;s[i];i++)
           if(s[i]!='(' and s[i]!=')') ans+=s[i];
        return ans;
    }
};
