class Solution {
 public:
  void rotate(vector<int>& nums, int k) {
    k = k % nums.size();
    vector<int> nums1(begin(nums) + nums.size() - k, end(nums));
    vector<int> nums2(begin(nums), end(nums) - k);
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    nums = nums1;
  }
};