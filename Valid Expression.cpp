bool valid(string s)
{
    // code here
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            st.push(s[i]);
        else{
            if(!st.empty()){
                char a=st.top();
                if((s[i]==')' && a=='(') || (s[i]=='}' && a=='{') || (s[i]==']' && a=='['))
                    st.pop();
                else
                    return false;
            }
            else
              return false;
            
        }
        
      
    }
      if(!st.empty())
            return false;
        else
            return true;
}