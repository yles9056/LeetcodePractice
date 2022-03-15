class Solution {
 public:
  void quickSort(vector<int>& arr, int left, int right) {
    int temp;
    if (left < right) {
      int pivot = arr[left];  //假設pivot在第一個的位置
      int l = left;
      int r = right + 1;

      while (1) {
        while (l < right && arr[++l] < pivot)
          ;  //向右找小於pivot的數值的位置
        while (r > 0 && arr[--r] > pivot)
          ;  //向左找大於pivot的數值的位置

        if (l >= r)  //範圍內pivot右邊沒有比pivot小的數,反之亦然
        {
          break;
        }

        swap(arr[l], arr[r]);  //比pivot大的數移到右邊，比pivot小的數換到左邊
      }

      swap(arr[left], arr[r]);  //將pivot移到中間

      quickSort(arr, left, r - 1);   //左子數列做遞迴
      quickSort(arr, r + 1, right);  //右子數列做遞迴
    }
  }
  void sortColors(vector<int>& nums) {
    quickSort(nums, 0, nums.size() - 1);
    //return nums;
  }
};