class Solution {
 public:
  int triangleNumber(vector<int>& nums) {
    // https://leetcode.com/problems/valid-triangle-number/discuss/1339340/C%2B%2BJavaPython-Two-Pointers-Picture-Explain-Clean-and-Concise-O(N2)
    sort(nums.begin(), nums.end());
    int n = nums.size(), ans = 0;
    for (int k = 2; k < n; ++k) {
      int i = 0, j = k - 1;
      while (i < j) {
        if (nums[i] + nums[j] > nums[k]) {
          ans += j - i;
          j -= 1;
        } else {
          i += 1;
        }
      }
    }
    return ans;
  }
};