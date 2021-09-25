class Solution
{
public:
  int numSub(string s)
  {
    int currentCount = 0;
    int ans = 0;
    int mod = 1e9 + 7;
    for (char c : s)
    {
      // Alternatively, use: (1 + currentCount) * currentCount / 2
      if (c == '1')
      {
        currentCount += 1;
        ans += currentCount;
        ans %= mod;
      }
      else
      {
        currentCount = 0;
      }
    }
    return ans;
  }
};