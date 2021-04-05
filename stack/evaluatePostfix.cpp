

class Solution{
    public:
    int evaluatePostfix(string s)
    {
        stack<int> st;
        for(int i=0;s[i];i++){
            if(isdigit(s[i]))
            st.push(s[i]-'0');
            else{
                int x=st.top(),ans=0;
                st.pop();
                int y=st.top();
                st.pop();
                if(s[i]=='+') ans=y+x;
                else if(s[i]=='-') ans=y-x;
                else if(s[i]=='*') ans=y*x;
                else ans=y/x;
                st.push(ans);
            }
        }
        return st.top();
    }
};
