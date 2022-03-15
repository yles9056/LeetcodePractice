class Solution {
 public:
  int totalHammingDistance(vector<int>& nums) {
    int arr[32] = {0};
    int size = nums.size();
    for (int i = 0; i < size; i++) {
      int current = nums[i];
      for (int j = 0; current; j++, current >>= 1) {
        if (current & 1) {
          arr[j] += 1;
        }
      }
      /*int j = 0;
            while(current) {
                //cout << nums[i] << ", " << j << ", " << (int)(current & 1) << "\n";
                if (current & 1) {
                    arr[j] += 1;
                }
                current >>= 1;
                j+= 1;
            }*/
    }

    int sum = 0;
    for (int i = 0; i < 32; i++) {
      //cout << arr[i] << "\n";
      sum += arr[i] * (size - arr[i]);
    }
    return sum;
  }
};