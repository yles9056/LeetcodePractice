class Solution {
 public:
  int tribonacci(int n) {
    /*
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (n == 1) return 1;
        return tribonacci(n-3) + tribonacci(n - 2) + tribonacci(n - 1);
        */

    /*
        vector<int> cache(n + 1);
        cache[0] = 0;
        if (n == 0) return cache[0];
        cache[1] = 1;
        if (n == 1) return cache[1];
        cache[2] = 1;
        if (n == 2) return cache[2];
        for (int i = 3; i <= n; i++) {
            cache[i] = cache[i - 3] + cache[i - 2] + cache[i - 1];
        }
        return cache[n];
        */

    int threeSetpsBefore = 0;
    if (n == 0) return threeSetpsBefore;
    int twoSetpsBefore = 1;
    if (n == 1) return twoSetpsBefore;
    int oneSetpsBefore = 1;
    if (n == 2) return oneSetpsBefore;
    int now = 0;
    for (int i = 3; i <= n; i++) {
      now = threeSetpsBefore + twoSetpsBefore + oneSetpsBefore;
      threeSetpsBefore = twoSetpsBefore;
      twoSetpsBefore = oneSetpsBefore;
      oneSetpsBefore = now;
    }
    return now;
  }
};