class Solution {
 public:
  int countCharacters(vector<string>& words, string chars) {
    unordered_map<char, int> chars_counter;
    for (char c : chars) {
      chars_counter[c]++;
    }

    int counter = 0;

    for (string word : words) {
      if (isValidString(word, chars_counter)) {
        counter += word.size();
      }
    }
    return counter;
  }

  bool isValidString(string& word, unordered_map<char, int>& chars_counter) {
    unordered_map<char, int> word_counter;
    for (char c : word) {
      //word_counter[c]++;
      if (++word_counter[c] > chars_counter[c]) {
        return false;
      }
    }
    return true;
  }
};