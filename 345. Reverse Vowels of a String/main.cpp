class Solution {
 public:
  string reverseVowels(string s) {
    string t;
    string v = "aeiouAEIOU";
    int n = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
      if (std::find(std::begin(v), std::end(v), s[i]) != std::end(v)) {
        t += s[i];
      }
    }
    for (int i = 0; i < s.size(); i++) {
      if (std::find(std::begin(v), std::end(v), s[i]) != std::end(v)) {
        s[i] = t[n];
        n++;
      }
    }
    return s;
  }
};