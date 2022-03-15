class Solution {
 public:
  int rangeSum(vector<int>& nums, int n, int left, int right) {
    // sort(nums.begin(), nums.end());
    int size = nums.size();
    vector<int> rec;

    for (int i = 0; i < size; i++) {
      for (int j = i, sum = 0; j < size; j++) {
        rec.push_back(sum += nums[j]);
      }
    }

    sort(rec.begin(), rec.end());
    int ans = 0;
    for (int i = left - 1; i < rec.size() && i < right; i++) {
      //cout << rec[i] << "\n";
      ans = (ans + rec[i]) % (int)(1e9 + 7);
    }

    return ans;
  }
};