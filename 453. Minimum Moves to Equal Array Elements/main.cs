public class Solution
{
    public int MinMoves(int[] nums)
    {
        Array.Sort(nums);
        int ans = 0;
        int len = nums.Length;
        for (int i = len - 1; i > 0; i--)
        {
            if (nums[i] != nums[i - 1]) ans += (nums[i] - nums[i - 1]) * (len - i);
        }
        return ans;
    }
}