class Solution {
 public:
  int addDigits(int num) {
    int a = num % 9;
    if (num == 0) {
      return 0;
    } else if (a == 0) {
      return 9;
    } else {
      return a;
    }
    return 9;
  }
};