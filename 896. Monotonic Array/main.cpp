class Solution {
 public:
  bool isMonotonic(vector<int>& A) {
    return isAsc(A) || isDes(A);
  }

  bool isAsc(vector<int>& A) {
    // if (A.size() == 0)
    for (size_t i = 0; i + 1 < A.size(); i++) {
      if (A[i] > A[i + 1]) {
        return false;
      }
    }
    return true;
  }

  bool isDes(vector<int>& A) {
    // if (A.size() == 0)
    for (size_t i = 0; i + 1 < A.size(); i++) {
      if (A[i] < A[i + 1]) {
        return false;
      }
    }
    return true;
  }
};