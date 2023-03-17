class Solution{
public:
    vector<int> Reverse(stack<int> St){
        vector<int> ans;
        while(!St.empty()){
            ans.push_back(St.top());
            St.pop();
        }
        return ans;
    }
};
////or
class Solution{
public:
    void insertBottom(int &top,stack<int> &s){
        if(s.empty()){
            s.push(top);
            return ;
        }
        int t=s.top();
        s.pop();
        insertBottom(top,s);
        s.push(t);
    }
    void Reverse(stack<int> &St){
        if(St.empty())
            return ;
        int top=St.top();
        St.pop();
        Reverse(St);
        insertBottom(top,St);
    }
};