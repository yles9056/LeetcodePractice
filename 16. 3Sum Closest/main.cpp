class Solution {
 public:
  int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());

    int size = nums.size();
    int closest = nums[0] + nums[1] + nums[2];

    for (int first = 0; first < size; first++) {
      int second = first + 1;
      int third = size - 1;

      while (second < third) {
        int sum = nums[first] + nums[second] + nums[third];
        if (sum == target) {
          return sum;
        }

        if (abs(target - closest) > abs(target - sum)) {
          closest = sum;
        }

        if (sum > target) {
          third -= 1;
        } else {
          second += 1;
        }
      }
    }

    return closest;
  }
};