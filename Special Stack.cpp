class GfG{
    int min(int a,int b){
        if(a>b)
            return b;
        else
            return a;
    }
	public void push(int a,Stack<Integer> s)
	{
	    //add code here.
	    s.push(a);
	}
	public int pop(Stack<Integer> s)
        {
            //add code here.
            int f=s.peek();
            s.pop();
            return f;
	}
	public int min(Stack<Integer> s)
        {
           //add code here.
            int mini = 1000000;
	while( !s.empty() ){
	    mini = min(mini, s.peek());
	    s.pop();
	}
	return mini;
	}
	public boolean isFull(Stack<Integer>s, int n)
        {
           return s.size()>=n;
	}
	public boolean isEmpty(Stack<Integer>s)
        {
           return s.size()==0;
	}
}