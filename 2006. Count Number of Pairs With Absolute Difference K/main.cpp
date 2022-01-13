class Solution {
public:
  int countKDifference(vector<int>& nums, int k) {
    unordered_map<int, int> mem;
    int ans = 0;
    for (int i : nums) {
      if (mem.find(i + k) != mem.end()) {
        ans += mem[i + k];
      }
      
      if (mem.find(i - k) != mem.end()) {
        ans += mem[i - k];
      }
      
      if (mem.find(i) == mem.end()) {
        mem[i] = 1;
      } else {
        mem[i] = mem[i] + 1;
      }
    }
    return ans;
  }
};