class Solution {
public:
  vector<int> dailyTemperatures(vector<int>& temperatures) {
    int size = temperatures.size();
    vector ans(size,0);
    stack<int> mem;
    
    for (int i = 0; i < size; i++) {
      while(!mem.empty() && temperatures[mem.top()] < temperatures[i]) {
        int prev = mem.top();
        ans[prev] = i - prev;
        mem.pop();
      }
      mem.push(i);
    }
    
    return ans;
  }
};