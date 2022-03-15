class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    /*for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                int sum = nums[i] + nums[j];
                if(sum == target) {
                    return {i, j};
                }
            }
        }
        return {};*/

    unordered_map<int, int> imap;
    for (int i = 0; i < nums.size(); i++) {
      auto it = imap.find(target - nums[i]);
      if (it != imap.end()) {
        return vector<int>{i, it->second};
      }
      imap[nums[i]] = i;
    }
    return vector<int>{};
  }
};