class MyQueue {
 public:
  ::stack<int> input;
  ::stack<int> output;

  MyQueue() {}

  void push(int x) { input.push(x); }

  int pop() {
    int res = peek();
    output.pop();
    return res;
  }

  int peek() {
    if (output.empty()) {
      while (input.size() > 0) {
        output.push(input.top());
        input.pop();
      }
    }
    return output.top();
  }

  bool empty(void) { return input.empty() && output.empty(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */