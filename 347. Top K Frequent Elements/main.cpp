class Solution {
 public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> counter;
    int maxFreq = 0;

    for (auto i : nums) {
      maxFreq = max(maxFreq, ++counter[i]);
    }

    vector<vector<int>> bucket(maxFreq);
    for (auto i : counter) {
      //cout << i.first << " " << i.second << "\n";
      bucket[i.second - 1].push_back(i.first);
    }

    vector<int> ans;
    for (auto i = bucket.rbegin(); i != bucket.rend() && ans.size() < k; i++) {
      if (i->empty()) {
        continue;
      }
      ans.insert(ans.end(), i->begin(), i->end());
    }

    return ans;
  }
};