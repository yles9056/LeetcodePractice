class Solution {
 public:
  string reverseWords(string s) {
    /*size_t begin = 0;
        for(size_t i = 0; i <= s.size(); i++) {
            if (s[i] == ' ' || i == s.size()) {
                reverse(s.begin() + begin, s.begin() + i);
                begin = i + 1;
            }
        }
        return s;*/
    auto begin = s.begin();
    for (auto i = s.begin(); i <= s.end(); i++) {
      if (*i == ' ' || i == s.end()) {
        reverse(begin, i);
        begin = i + 1;
      }
    }
    return s;
  }
};