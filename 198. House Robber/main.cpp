class Solution {
 public:
  int helper(vector<int>& record, vector<int>& nums, int target) {
    if (target < 0) {
      return 0;
    }

    if (record[target] != -1) {
      return record[target];
    }

    if (target == 0) {
      record[0] = nums[0];
    } else {
      record[target] = max(
          nums[target] + helper(record, nums, target - 2),
          helper(record, nums, target - 1));
    }

    return record[target];
  }

  int rob(vector<int>& nums) {
    vector<int> record(nums.size(), -1);
    return helper(record, nums, nums.size() - 1);
  }
};