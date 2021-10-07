class Solution {
 public:
  vector<int> asteroidCollision(vector<int>& asteroids) {
    vector<int> res;
    for (int i = 0; i < asteroids.size();) {
      int next = asteroids[i];
      if (res.empty()) {
        res.push_back(next);
        i++;
      } else {
        int last = res.back();
        if (next < 0 && last > 0) {
          int absNext = abs(next);
          int absLast = abs(last);
          if (absNext >= absLast) {
            res.pop_back();
          }

          if (absNext <= absLast) {
            i++;
          }
        } else {
          res.push_back(next);
          i++;
        }
      }
    }

    return res;
  }
};