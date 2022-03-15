class Solution {
 public:
  bool detectCapitalUse(string word) {
    bool firstCap = false;
    size_t capCount = 0;

    for (size_t i = 0; i < word.size(); i++) {
      if (i == 0) {
        firstCap = word[i] >= 'A' && word[i] <= 'Z';
      }
      if (word[i] >= 'A' && word[i] <= 'Z') {
        capCount++;
      }
    }

    return capCount == word.length() ||
           capCount == 0 ||
           (capCount == 1 && firstCap);
  }
};