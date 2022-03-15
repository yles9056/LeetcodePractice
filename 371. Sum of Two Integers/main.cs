public class Solution
{
    public int GetSum(int a, int b)
    {
        int c;
        while (b != 0)
        {
            c = a & b;
            a = a ^ b;
            b = c << 1;
        }
        return a;
    }
}