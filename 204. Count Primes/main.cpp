class Solution {
 public:
  int countPrimes(int n) {
    if (n < 2) {
      return 0;
    }

    vector<bool> notPrime(n, false);
    notPrime[0] = true;
    notPrime[1] = true;
    int size = notPrime.size();
    int res = 0;

    for (int i = 2; i < size; i++) {
      if (notPrime[i]) {
        continue;
      }

      res += 1;

      for (int j = 2 * i; j < size; j += i) {
        // for(long j = (long)i * i; j < size; j += i) {
        notPrime[j] = true;
      }
    }

    return res;
  }
};