class Solution {
 public:
  int numJewelsInStones(string J, string S) {
    map<char, int> d;
    for (char j : J) {
      d[j]++;
    }

    int count = 0;
    for (char s : S) {
      count += d[s];
    }

    return count;
  }
};