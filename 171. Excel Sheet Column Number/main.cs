public class Solution
{
    public int TitleToNumber(string s)
    {
        int sum = 0;
        for (int i = 0; i < s.Length; i++)
        {
            sum = sum * 26 + s[i] - 64;
        }
        return sum;
    }
}