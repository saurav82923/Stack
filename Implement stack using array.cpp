void MyStack :: push(int x)
{
    // Your Code
    top++;
    arr[top]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code 
    if(top>=0){
    int a=arr[top];
    top--;
    return a;
    }
    else 
        return -1;
}
