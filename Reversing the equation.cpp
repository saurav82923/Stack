class Solution
{
  public:
    string reverseEqn (string s)
        {
           stack<string> st;
            string ans="";
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='+' ||s[i]=='-' ||s[i]=='*' ||s[i]=='/' )
                {
                     st.push(ans);
                     ans=s[i];
                    //  cout<<ans<<endl;
                     st.push(ans);
                     ans="";
                }
               else
                ans=ans+s[i];
            }
            st.push(ans);
            s="";
            while(!st.empty())
            {
                s+=st.top();
                st.pop();
            }
            return s;
        }
};
