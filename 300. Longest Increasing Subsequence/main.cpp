class Solution {
 public:
  int method1(vector<int>& nums) {
    vector<pair<int, int>> mem;
    int size = nums.size();

    for (int i = 0; i < size; i++) {
      int current = nums[i];

      for (int j = 0; j < mem.size(); j++) {
        if (current > mem[j].first) {
          mem.push_back(pair<int, int>(current, mem[j].second + 1));
        }
      }

      mem.push_back(pair<int, int>(current, 1));
    }

    int ans = 0;
    for (int i = 0; i < mem.size(); i++) {
      ans = max(ans, mem[i].second);
    }

    return ans;
  }

  int method2(vector<int>& nums) {
    vector<int> mem(nums.size(), 0);
    int ans = 0;

    for (int i = 0; i < nums.size(); i++) {
      for (int j = 0; j < i; j++) {
        if (nums[i] > nums[j]) {
          mem[i] = max(mem[i], mem[j]);
        }
      }
      mem[i] += 1;
      ans = max(ans, mem[i]);
    }

    // [0,1,0,3,2,3]
    // [1,2,1,3,3,4]
    /*for(int i = 0; i < nums.size(); i++) {
            cout << mem[i] << " ";
        }*/

    return ans;
  }

  int lengthOfLIS(vector<int>& nums) {
    return method2(nums);
  }
};