void SortedStack :: sort()
{
   //Your code here
   multiset<int> se;
   while(!s.empty()){
       se.insert(s.top());
       s.pop();
   }
   for(auto i:se){
       s.push(i);
   }
    
}