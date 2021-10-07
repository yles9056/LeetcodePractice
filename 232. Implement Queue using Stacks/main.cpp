class MyQueue {
 public:
  ::stack<int> myStack;
  ::stack<int> revStack;

  MyQueue() {}

  void reverse(::stack<int>& stack1, ::stack<int>& stack2) {
    while (stack1.size() > 0) {
      int element = stack1.top();
      stack1.pop();
      stack2.push(element);
    }
  }

  void push(int x) { myStack.push(x); }

  int pop() {
    reverse(myStack, revStack);
    int res = revStack.top();
    revStack.pop();
    reverse(revStack, myStack);
    return res;
  }

  int peek() {
    reverse(myStack, revStack);
    int res = revStack.top();
    reverse(revStack, myStack);
    return res;
  }

  bool empty() { return myStack.empty(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */