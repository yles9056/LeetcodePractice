class Solution {
 public:
  unordered_map<int, int> mem;

  int numSquares(int n) {
    if (n <= 0) {
      return 0;
    }

    if (mem.find(n) == mem.end()) {
      //mem[n] = INT_MAX;
    } else {
      return mem[n];
    }

    int sq = sqrt(n);
    int temp = INT_MAX;

    for (int i = sq; i >= 1; i--) {
      temp = min(temp, numSquares(n - i * i));

      if (temp <= 1)
        break;
    }

    //cout << n << " " << mem[n] << "\n";
    mem[n] = temp + 1;

    return mem[n];
  }
};