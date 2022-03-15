class Solution {
 public:
  map<int, int> res;
  int helper(int m, int n) {
    if (m == 0 || n == 0) {
      return 1;
    }

    if (m < 0 || n < 0) {
      return 0;
    }

    int index = m * 100 + n;
    if (res.find(index) == res.end()) {
      res[index] = helper(m - 1, n) + helper(m, n - 1);
    }

    return res[index];
  }

  int uniquePaths(int m, int n) {
    return helper(m - 1, n - 1);
  }
};