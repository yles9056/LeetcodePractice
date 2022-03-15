class Solution {
 public:
  bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> counter;
    for (int i : arr) {
      counter[i]++;
    }

    /*
        unordered_set<int> history;
        
        for (auto& kv : counter) {
            if (history.find(kv.second) == history.end()) {
                history.insert(kv.second);
            }
            else {
                return false;
            }
        }
        
        return true;
        */

    unordered_map<int, int> history;
    for (auto [k, v] : counter) {
      history[v]++;
    }

    return counter.size() == history.size();
  }
};