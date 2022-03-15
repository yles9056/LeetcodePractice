public class Solution
{
    public char FindTheDifference(string s, string t)
    {
        StringBuilder temp = new StringBuilder(s);
        temp.Append(t);
        for (int i = 1; i < temp.Length; i++)
        {
            temp[0] ^= temp[i];
        }
        return temp[0];
    }
}