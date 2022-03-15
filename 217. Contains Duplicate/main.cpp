class Solution {
 public:
  bool containsDuplicate(vector<int>& nums) {
    /*unordered_map<int, int> counter;
        for (int i : nums) {
            if (counter[i] > 0) {
                return true;
            }            
            counter[i]++;
        }
        return false;*/
    return nums.size() > unordered_set<int>(nums.begin(), nums.end()).size();
  }
};