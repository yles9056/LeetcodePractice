class Solution {
 public:
  int firstUniqChar(string s) {
    int count['z' - 'a' + 1] = {};
    for (char c : s) {
      count[c - 'a']++;
    }
    for (size_t i = 0; i < s.size(); i++) {
      if (count[s[i] - 'a'] == 1) {
        return i;
      }
    }
    return -1;
  }
};