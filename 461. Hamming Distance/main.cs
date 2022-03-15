public class Solution
{
    public int HammingDistance(int x, int y)
    {
        int temp = x ^ y, ans = 0;
        while (temp > 0)
        {
            //if(temp%2==1)ans++;
            //temp/=2;
            ans++;
            temp &= temp - 1;
        }
        return ans;
    }
}