class Solution {
 public:
  string toLowerCase(string str) {
    for (size_t i = 0; i < str.size(); i++) {
      str[i] = tolower(str[i]);
    }
    return str;
  }
};