class Solution {
 public:
  int numberOfArithmeticSlices(vector<int>& nums) {
    if (nums.size() < 3) {
      return 0;
    }

    int lastDiff = nums[1] - nums[0];
    int counter = 1;
    int ans = 0;

    for (int i = 2; i < nums.size(); i++) {
      int currentDiff = nums[i] - nums[i - 1];
      //cout << currentDiff << " " << lastDiff << " " << counter << " " << ans << "\n";

      if (currentDiff == lastDiff) {
        counter++;
        if (counter > 1) {
          ans += (counter - 1);
        }
      } else {
        counter = 1;
      }

      lastDiff = currentDiff;
    }

    return ans;
  }
};