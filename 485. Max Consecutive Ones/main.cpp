class Solution {
 public:
  int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxLength = 0;
    int count = 0;
    for (size_t t = 0; t < nums.size(); t++) {
      if (nums[t] == 1) {
        count++;
      } else {
        if (count > maxLength) {
          maxLength = count;
        }
        count = 0;
      }

      /*if (nums[t] == 0 || t + 1 == nums.size()) {
                if (count > maxLength) {
                    maxLength = count;
                }
                count = 0;
            }*/
    }
    if (count > maxLength) {
      return count;
    }
    return maxLength;
  }
};