class Solution
{
    public:
    vector<long long> nextSmallerElement(long long *arr, int n) {
        stack<long long> s;
        s.push(-1);
        vector<long long> ans(n);

        for(long long i=n-1; i>=0 ; i--) {
            long long curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            //ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<long long> prevSmallerElement(long long *arr, int n) {
        stack<long long> s;
        s.push(-1);
        vector<long long> ans(n);

        for(int i=0; i<n; i++) {
           long long curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            //ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans; 
    }
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
          
        
        vector<long long> next(n);
        next = nextSmallerElement(arr, n);
            
        vector<long long> prev(n);
        prev = prevSmallerElement(arr, n);
        
        long long area = INT_MIN;
        for(int i=0; i<n; i++) {
            long long l = arr[i];
            
            if(next[i] == -1) {
                next[i] = n;
            }
             long long b = next[i] - prev[i] - 1;
            long long newArea = l*b;
            area = max(area, newArea);
        }
        return area;
    }
};