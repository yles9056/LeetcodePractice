class Solution {
 public:
  int repeatedNTimes(vector<int>& A) {
    for (size_t i = 0; i < A.size(); i++) {
      auto it = find(A.begin() + i + 1, A.end(), A[i]);
      if (it != A.end()) {
        return A[i];
      }
    }
    return -1;
  }
};