class Solution {
 public:
  void moveZeroes(vector<int>& nums) {
    size_t j = 0;
    for (size_t i = 0; i < nums.size(); i++) {
      if (nums[i] != 0) {
        nums[j] = nums[i];
        j++;
      }
    }

    for (size_t i = j; i < nums.size(); i++) {
      nums[i] = 0;
    }

    return;
  }
};