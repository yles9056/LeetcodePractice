class Solution {
 public:
  int peakIndexInMountainArray(vector<int>& A) {
    for (size_t i = 0; i + 1 < A.size(); i++) {
      if (A[i] > A[i + 1]) {
        return i;
      }
    }
    return -1;
  }
};