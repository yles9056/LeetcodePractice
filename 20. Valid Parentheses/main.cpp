class Solution {
 public:
  bool isValid(string s) {
    vector<char> test;
    for (char& p : s) {
      if (p == '(' || p == '[' || p == '{') {
        test.push_back(p);
      } else {
        if (test.empty()) return false;
        if (p == ')' && test.back() != '(') return false;
        if (p == ']' && test.back() != '[') return false;
        if (p == '}' && test.back() != '{') return false;
        test.pop_back();
      }
    }
    return test.empty();
  }
};